create database ICT;

CREATE TABLE Students(
    students_id SERIAL PRIMARY KEY,
    first_name VARCHAR(255),
    last_name VARCHAR(255),
    courses INTEGER,
    date_of_birth DATE,
    age INTEGER,
    gpa DECIMAL

);


INSERT INTO Students(student_id, first_name, last_name, courses, date_of_birth, age, gpa)
VALUES
    (1, 'Yerassyl', 'Saiman', 2, '2005-05-01', 18, 3.6),
    (2, 'Garcia', 'Johnson', 2, '2005-02-15', 18, 4.0),
    (3, 'Robert', 'Williams', 2, '2004-11-25', 18, 3.8),
    (4, 'Daniel', 'Brown', 2, '2005-03-22', 18, 2.5),
    (5, 'Michael', 'Davis', 2, '2005-03-08', 18, 3.5),
    (6, 'William', 'Miller', 1, '2004-08-23', 19, 3.0),
    (7, 'Sarah', 'Wilson', 3, '2005-11-30', 18, 2.9),
    (8, 'Benjamin', 'Moore', 2, '2002-02-17', 21, 3.4),
    (9, 'Emily', 'Sula', 4, '2003-07-09', 20, 3.3);


--a. Write SQL queries to select all students of a certain course.
SELECT *
FROM Students
WHERE courses = 2;

--b. Select and output the most senior and junior students.
SELECT *
FROM Students
ORDER BY date_of_birth
LIMIT 1;

SELECT *
FROM Students
ORDER BY date_of_birth DESC
LIMIT 1;

SELECT *
FROM Students
WHERE date_of_birth = (
    SELECT MAX(date_of_birth) FROM Students
)
OR date_of_birth = (
    SELECT MIN(date_of_birth) FROM Students
);

--c. Write a request that will update the information about the student (for example, change his last name).
UPDATE Students
SET last_name = 'Mazhit'
WHERE last_name = 'Mazhitov';

--d. Apply changes to multiple students.
UPDATE Students
SET first_name = 'Amira', last_name = 'Saiman'
Where students_id = 5;

--Create some more tables (for example, "Teachers" and "Courses") and link them with relationships.
CREATE TABLE Teachers(
    id_teacher SERIAL PRIMARY KEY,
    name_teacher VARCHAR(255)
);
CREATE TABLE Course(
     id_course SERIAL PRIMARY KEY,
     name_course VARCHAR(255)
);

CREATE TABLE StudentCourse(
    idTeacher INT,
    idCourse INT,
    studentsId INT,
    nameTeacher VARCHAR(255),
    nameCourse VARCHAR(255),
    firstName VARCHAR(255),
    PRIMARY KEY (idTeacher,idCourse,studentsId),
    FOREIGN KEY (idTeacher,nameTeacher) REFERENCES Teachers(id_teacher,name_teacher),
    FOREIGN KEY (idCourse, nameCourse) REFERENCES Course(id_course, name_course),
    FOREIGN KEY (studentsId, firstName) REFERENCES Students(students_id,first_name)
);
--a. Write a query that returns the number of students in each course.
SELECT courses, count(*) as num
FROM Students
GROUP BY courses;

--b. Write a query to calculate the average age of students in each course.

SELECT course, avg(age) as average
from Students
GROUP BY course;

--c. Write a query to select students who have an average score above the average score for all students

SELECT *
FROM Students
WHERE gpa > (SELECT AVG(gpa) FROM Students);

--d. Write a request to select students who do not have grades below

SELECT *
FROM Students
WHERE gpa >= 3.0;

-- 3.
--Write an SQL query that will create a view that combines data about students, courses and their grades.


CREATE VIEW StudentCourseGrades AS
SELECT s.students_id, s.first_name, s.last_name, s.course, s.gpa
FROM Students s
JOIN Course AS c ON s.course = c.id_course;

--• Write a query that will output the average score of students in each course from the created view.

SELECT course, AVG(gpa) AS average_score
FROM StudentCourseGrades
GROUP BY course;



DROP table Students;
DROP table Teachers;