-- 1. Create database called «lab_6»
CREATE DATABASE lab_6;

-- 2. Create the following tables
CREATE TABLE locations(
  location_id SERIAL PRIMARY KEY,
  street_address VARCHAR(25),
  postal_code VARCHAR(12),
  city VARCHAR(30),
  state_province VARCHAR(12)
);

CREATE TABLE departments(
  department_id SERIAL PRIMARY KEY,
  department_name VARCHAR(50) UNIQUE,
  budget INTEGER,
  location_id INTEGER REFERENCES locations
);

CREATE TABLE employees(
  employee_id INT PRIMARY KEY,
  first_name VARCHAR(50),
  last_name VARCHAR(50),
  email VARCHAR(50),
  phone_number VARCHAR(20),
  salary INTEGER,
  department_id INTEGER REFERENCES departments
);

-- drop table locations cascade;
-- drop table departments cascade;
-- drop table employees cascade;

select * from locations;
select * from departments;
select * from employees;

-- 3. Enter 5 values
INSERT INTO locations (street_address, postal_code, city, state_province) VALUES
('Address 1', '12345', 'Moscow', 'SP1'),
('Address 2', '23456', 'Aktobe', 'SP2'),
('Address 3', '34567', 'Almaty', 'SP3'),
('Address 4', '45678', 'Rome', 'SP4'),
('Address 5', '56789', 'Aktobe', 'SP5');

INSERT INTO departments (department_id, department_name, budget, location_id) VALUES
(30, 'Sales', 100000, 1),
(50, 'Developer', 250000, 2),
(60, 'HR', 50000, 3),
(70, 'Event', 150000, 4),
(80, 'SMM', 75000, 5);

INSERT INTO employees (employee_id, first_name, last_name, email, phone_number, salary, department_id) VALUES
(1, 'Yerassyl', 'Saiman', 'y_saiman@kbtu.kz', '707-720-05-69', 60000, 30),
(2, 'Nurbek', 'Murat', 'n_murat@kbtu.kz', '555-5678', 65000, 50),
(3, 'Sultan', 'Kydyrmoldin', 's_kydyrmoldin@kbtu.kz', '555-1011', 70000, 60),
(4, 'Alice', 'Jones', 'n_murat@kbtu.kz', '555-1213', 75000, 70),
(5, 'Alima', 'Korkem', 'a_korkem@kbtu.kz', '555-1415', 80000, 80);

-- 4. Select the first name, last name, department id, and department name for each employee:
SELECT e.first_name, e.last_name, d.department_id, d.department_name
FROM employees e
JOIN departments d ON e.department_id = d.department_id;

-- 5. Select the first name, last name, department id,
-- and department name, for all employees for departments 80 or 30:
SELECT e.first_name, e.last_name, d.department_id, d.department_name
FROM employees e
JOIN departments d ON e.department_id = d.department_id
WHERE d.department_id = 80 OR d.department_id = 30;

SELECT e.first_name, e,last_name, e.email, d.department_name, l.postal_code
FROM employees e
JOIN departments d ON  e.department_id = d.department_id
JOIN locations l ON l.location_id = d.location_id
WHERE e.salary > 70000;

-- 6. Select the first and last name, department, city, and state province for each employee:
SELECT e.first_name, e.last_name, d.department_name, l.city, l.state_province
FROM employees e
JOIN departments d ON e.department_id = d.department_id
JOIN locations l ON d.location_id = l.location_id;

-- 7. Select all departments including those where there does not have any employee
SELECT d.department_name
FROM departments d
LEFT JOIN employees e ON d.department_id = e.department_id;

-- 8. Select the first name, last name, department id and name,
-- for all employees who have or have not any department
SELECT e.first_name, e.last_name, d.department_id, d.department_name
FROM employees e
LEFT JOIN departments d ON e.department_id = d.department_id;


-- 9. Select the employee last name, first name, who works in Moscow:
SELECT e.last_name, e.first_name
FROM employees e
JOIN departments d ON e.department_id = d.department_id
JOIN locations l ON d.location_id = l.location_id
WHERE l.city = 'Moscow';





