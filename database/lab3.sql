create database ICT;
drop database ICT;

CREATE TABLE Students01(
    student_id SERIAL PRIMARY KEY,
    first_name VARCHAR(255),
    last_name VARCHAR(255),
    courses INTEGER,
    date_of_birth DATE,
    age INTEGER,
    gpa DECIMAL
);
drop table Students01;

INSERT INTO Students01(student_id, first_name, last_name, courses, date_of_birth, age, gpa)
VALUES
    (1, 'Yerassyl', 'Saiman', 2, '2005-05-01', 18, 3.6),
    (2, 'Garcia', 'Johnson', 2, '2005-11-30', 18, 4.0),
    (3, 'Robert', 'Williams', 2, '2004-11-25', 18, 3.8),
    (4, 'Daniel', 'Brown', 2, '2005-03-22', 18, 2.5),
    (5, 'Michael', 'Davis', 2, '2005-03-08', 18, 3.5),
    (6, 'William', 'Miller', 1, '2004-08-23', 19, 3.0),
    (7, 'Sarah', 'Wilson', 3, '2005-11-30', 18, 2.9),
    (8, 'Benjamin', 'Moore', 2, '2002-02-17', 21, 3.4),
    (9, 'Emily', 'Sula', 4, '2003-07-09', 20, 3.3);


--a. Write SQL queries to select all students of a certain course.
SELECT *
FROM Students01
WHERE courses = 2;

--b. Select and output the most senior and junior students.
SELECT * FROM students01
WHERE date_of_birth = (SELECT max(date_of_birth) FROM students01)
OR date_of_birth = (SELECT min(date_of_birth) FROM students01);

--c. Write a request that will update the information about the student (for example, change his last name).
UPDATE Students01
SET last_name = 'Saiman'
WHERE last_name = 'Saimanov';

UPDATE Students01
SET last_name = 'Saimanov'
WHERE last_name = 'Saiman';

--d. Apply changes to multiple students.
UPDATE Students01
SET age = 20
Where age = 19;


--Create some more tables (for example, "Teachers" and "Courses") and link them with relationships.
-- Create the Teachers table with a composite unique constraint.
CREATE TABLE Teachers(
    id_teacher SERIAL PRIMARY KEY,
    name_teacher VARCHAR(255),
    UNIQUE (id_teacher, name_teacher)
);

INSERT INTO TEACHERS(id_teacher, name_teacher)
VALUES
    (1, 'TIMUR MUSTAFIN'),
     (2, 'ARNUR KELGENBAEV');

SELECT * FROM TEACHERS;

-- Create the Courses table with a composite unique constraint.
CREATE TABLE Courses(
    id_course SERIAL PRIMARY KEY,
    name_course VARCHAR(255),
    UNIQUE (id_course, name_course)
);

INSERT INTO Courses(id_course, name_course)
VALUES
    (1, 'CALCULUS'),
     (2, 'PP1');

SELECT * FROM Courses;

DROP TABLE Teachers;
DROP TABLE COURSES;
-- Add a unique constraint on "studentsId" and "firstName" in the Students01 table.
ALTER TABLE Students01
ADD CONSTRAINT unique_student_id_name UNIQUE (student_id, first_name);


CREATE TABLE StudentCourse(
    idTeacher INT,
    idCourse INT,
    studentsId INT,
    nameTeacher VARCHAR(255),
    nameCourse VARCHAR(255),
    firstName VARCHAR(255),
    PRIMARY KEY (idTeacher, idCourse, studentsId),
    FOREIGN KEY (idTeacher, nameTeacher) REFERENCES Teachers(id_teacher, name_teacher),
    FOREIGN KEY (idCourse, nameCourse) REFERENCES Courses(id_course, name_course),
    FOREIGN KEY (studentsId, firstName) REFERENCES Students01(student_id, first_name)
);

DROP TABLE StudentCourse;
--a. Write a query that returns the number of students in each course.
SELECT courses, count(*) as num
FROM Students01
GROUP BY courses;

--b. Write a query to calculate the average age of students in each course.

SELECT courses, avg(age)
FROM Students01
GROUP BY courses;

--c. Write a query to select students who have an average score above the average score for all students
SELECT AVG(gpa) FROM Students01;

SELECT *
FROM Students01
WHERE gpa > (SELECT AVG(gpa) FROM Students01);


--d. Write a request to select students who do not have grades below
SELECT *
FROM Students01
WHERE gpa >= 3.0;

-- 3.
--Write an SQL query that will create a view that combines data about students, courses and their grades.
CREATE VIEW StudentCourseGrades AS
SELECT s.student_id, s.first_name, s.last_name, s.courses, s.gpa
FROM Students01 s
JOIN Courses AS c ON s.courses = c.id_course;

SELECT * FROM StudentCourseGrades;

drop view StudentCourseGrades;
--• Write a query that will output the average score of students in each course from the created view.

SELECT courses, AVG(gpa)
FROM StudentCourseGrades
GROUP BY courses;



DROP table Students01;
DROP table Teachers;