----Lab5----
--task1--
create database lab5;
--task2--
create table salesmans (salesman_id numeric(4) primary key
                       , name varchar(255) not null
                       , city varchar(255)
                       , comission real not null check (comission>0 and comission < 1));

create table customers (customer_id numeric(4) primary key
                       , cust_name varchar(255) not null
                       , city varchar(255)
                       , grade int
                       , salesman_id numeric(4) not null
                       , foreign key (salesman_id) references salesmans (salesman_id) on delete cascade on update cascade);

create table orders (ord_no numeric(5) primary key
                    , purch_amt real default 1 check (purch_amt>0)
                    , ord_date date
                    , customer_id numeric(4) not null
                    , salesman_id numeric(4) not null
                    , foreign key (customer_id) references customers (customer_id) on delete cascade on update cascade
                    , foreign key (salesman_id) references salesmans (salesman_id) on delete cascade on update cascade);

insert into salesmans (salesman_id, name, city, comission)
values (5001, 'James Hoog', 'New York', 0.15)
     ,(5002, 'Nail Knite', 'PAris', 0.13)
     ,(5005, 'Pit Alex', 'London', 0.11)
     ,(5006, 'Mc Lyon', 'Paris', 0.14)
     ,(5003, 'Lauson Hen', null, 0.12)
     ,(5007, 'Paul Adam', 'Rome', 0.13);

insert into customers (customer_id, cust_name, city, grade, salesman_id)
values (3002, 'Nick Rimando', 'New York', 100, 5001)
     ,(3005, 'Graham Zusi', 'California', 200, 5002)
     ,(3001, 'Brad Guzan', 'London', null, 5005)
     ,(3004, 'Fabian Johns', 'Paris', 300, 5006)
     ,(3007, 'Brad Davis', 'New York', 200, 5001)
     ,(3009, 'Geoff Camero', 'Berlin', 100, 5003)
     ,(3008, 'Julian Green', 'London', 300, 5002);

insert into orders (ord_no, purch_amt, ord_date, customer_id, salesman_id)
values (70001, 150.5, '2012-10-05', 3005, 5002)
     ,(70009, 270.65, '2012-09-10', 3001, 5005)
     ,(70002, 65.26, '2012-10-05', 3002, 5001)
     ,(70004, 110.5, '2012-08-17', 3009, 5003)
     ,(70007, 948.5, '2012-09-10', 3005, 5002)
     ,(70005, 2400.6, '2012-07-27', 3007, 5001)
     ,(70008, 5760, '2012-09-10', 3002, 5001);

--task3--
select sum(purch_amt) from orders;
--task4--
select avg(purch_amt) from orders;
--task5--
select distinct count(cust_name) from customers;
--task6--
select * from orders order by purch_amt limit 1;
--task7--
select cust_name from customers where cust_name like '%b';
--task8--
select * from orders
join customers on orders.customer_id = customers.customer_id
where customers.city = 'New York';
--task9--
select * from customers
join orders on orders.customer_id = customers.customer_id
where orders.purch_amt>10;
--task10--
select sum(grade) from customers;
--task11--
select * from customers where cust_name is not null;
--task12--
select grade from customers where grade is not null order by grade desc limit 1;


select * from customers;
select * from orders;
select * from salesmans;

drop table customers;
drop table orders;
drop table salesmans;