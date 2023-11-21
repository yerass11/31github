SELECT department.dept_name, AVG(instructor.salary) AS avg_salary
FROM department, instructor
WHERE department.dept_name = instructor.dept_name
GROUP BY department.dept_name
ORDER BY avg_salary;

SELECT building, COUNT(building) AS course_count FROM section
GROUP BY building
ORDER BY course_count DESC LIMIT 1;

SELECT dept_name, COUNT(dept_name) AS course_count FROM course
GROUP BY dept_name
ORDER BY course_count LIMIT 1;
SELECT department.dept_name, AVG(instructor.salary) AS avg_salary
FROM department, instructor
WHERE department.dept_name = instructor.dept_name
GROUP BY department.dept_name
ORDER BY avg_salary;

SELECT building, COUNT(building) AS course_count FROM section
GROUP BY building
ORDER BY course_count DESC LIMIT 1;

SELECT dept_name, COUNT(dept_name) AS course_count FROM course
GROUP BY dept_name
ORDER BY course_count LIMIT 1;

SELECT student.id, student.name FROM student
WHERE student.dept_name = 'Comp. Sci.'
AND student.id IN (SELECT takes.id FROM takes WHERE student.id = takes.id
GROUP BY takes.id HAVING COUNT(DISTINCT takes.course_id) > 3);

SELECT instructor.id, instructor.name FROM instructor
WHERE instructor.dept_name IN (SELECT department.dept_name FROM department
WHERE department.building = 'Taylor' GROUP BY department.dept_name);

SELECT name FROM instructor WHERE dept_name IN ('Biology', 'Philosophy', 'Music');

SELECT instructor.name FROM instructor
WHERE instructor.id IN (SELECT teaches.id FROM teaches
WHERE teaches.year = 2018 AND instructor.id NOT IN (SELECT id FROM teaches WHERE year = 2023)
GROUP BY teaches.id);
SELECT student.id, student.name FROM student
WHERE student.dept_name = 'Comp. Sci.'
AND student.id IN (SELECT takes.id FROM takes WHERE student.id = takes.id
GROUP BY takes.id HAVING COUNT(DISTINCT takes.course_id) > 3);

SELECT instructor.id, instructor.name FROM instructor
WHERE instructor.dept_name IN (SELECT department.dept_name FROM department
WHERE department.building = 'Taylor' GROUP BY department.dept_name);

SELECT name FROM instructor WHERE dept_name IN ('Biology', 'Philosophy', 'Music');

SELECT instructor.name FROM instructor
WHERE instructor.id IN (SELECT teaches.id FROM teaches
WHERE teaches.year = 2018 AND instructor.id NOT IN (SELECT id FROM teaches WHERE year = 2023)
GROUP BY teaches.id);