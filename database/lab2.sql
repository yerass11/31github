create database lab2;

create table students(
    student_id serial primary key,
    full_name varchar(250),
    age int,
    birth_date date,
    gender char,
    average_grade int,
    nationality varchar(250),
    phone varchar(250),
    social_category varchar(250)
);
create table instructors(
    id serial primary key,
    fullname varchar(250),
    spoken_languages varchar(250),
    work_exp varchar(250),
    remote_lessons varchar(250),
    foreign key (id) references students(student_id)
);
select * from students;

INSERT INTO students (student_id, full_name, age, birth_date, gender, average_grade, nationality, phone, social_category)
VALUES ('22030286', 'Yerassyl Saiman', 18, '2005-03-14', 'M', 3.5, 'Kazakh', '87077200569', 'single');


select * from students;

create table a (
    id serial primary key
);

create table v (
    id serial primary key,
    foreign key(id) reference primary key a(id)
)