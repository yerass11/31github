create database lab1;

create table students (
    id INTEGER not null ,
    firstname varchar(50),
    lastname varchar(50)
);

alter table students add column isadmin INT;

alter table students    
    alter column isadmin set data type boolean
        using isadmin :: boolean;

alter table students
    alter column isadmin set default false;

alter table students
    add Primary key(id);


create table tasks(
    id integer,
    name varchar(50),
    user_id integer
);

drop table tasks;

drop table students;

drop database lab1;

