--1
--a.
select title from course
where dept_name = 'Biology' and credits > 3;

--b.
select room_number from classroom
where building = 'Watson' or building = 'Painter';

--c.
select course_id from course
where dept_name = 'Comp. Sci.';

--d.
select course_id from section
where semester = 'Spring';

--e.
select name from student
where tot_cred > 45 and tot_cred < 85;

--f.
select course_id, title from course
where lower(right(title, 1)) in ('a', 'e', 'i', 'o', 'u', 'y');

--g.
SELECT title FROM course
WHERE course_id IN (SELECT course_id FROM prereq WHERE prereq_id = 'EE-181');
 --2
 --a.
select  dept_name, avg(salary) as avg_salary
from instructor group by dept_name
order by avg_salary ASC;
-- order by dept_name desc;
--b.
select building
from section
group by building
order by count(*) desc
limit 1;

--c.
select dept_name, count(*)
from course
group by dept_name
order by count(*);

--d.
select id, name from student
where dept_name = 'Comp. Sci.' and tot_cred > 3;

--e.
select id, name from instructor
where dept_name in(
    select dept_name
    from department
    where building = 'Taylor'
    );

--f.
select name from instructor
where dept_name = 'Biology' or dept_name = 'Music' or dept_name = 'Phylosophy';

--g.
select name from instructor
where id in(
    select id
    from teaches
    where year = '2018' and year != '2023'
    );

--3
--a.
select name from student
where dept_name = 'Comp. Sci.' and id in (
    select id
    from takes
    where grade = 'A' or grade ='A-'
    )order by name ASC;


--b.
select name from instructor
where id in (
    select i_id
    from advisor
    where s_id in (
        select id
        from takes
        where grade = 'B'
        )
    );

--c.
select dept_name from student
where id in(
    select id
    from takes
    where grade != 'F' and grade != 'C'
    );

--d.
select name from instructor
where id in (
    select id
    from teaches
    where course_id in (
        select course_id
        from takes
        where grade != 'A' and grade != 'A-'
        )
    );

select title from course
where course_id in(
    select course_id
    from section
    where time_slot_id in (
        select time_slot_id
        from time_slot
        where start_hr < 13
        )
    );