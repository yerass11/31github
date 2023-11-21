create table faculty(
    name varchar(50),
    abrev varchar(50),
    faculty_id INT PRIMARY KEY
);

create table cafedra(
    faculty_id INT references faculty(faculty_id),
    name varchar(50),
    deleted BOOLEAN
);
