--1
create database lab_4;

--2
create table if not exists Warehouses  (
    code integer PRIMARY KEY ,
    location varchar(255),
    capacity integer
);
create table if not exists Packs (
    code varchar(4) PRIMARY KEY ,
    contents varchar(255),
    value integer,
    warehouses integer REFERENCES Warehouses(code)
);


--4
select * from Packs;

--5
select * from Packs where value > 190;

--6
select distinct contents from Packs;

--7
select w.code, count(p.code) from Warehouses w left join Packs p on w.code = p.warehouses group by w.code;

--8
select w.code, count(p.code) from Warehouses w left join Packs p on w.code = p.warehouses group by w.code having count(p.code) > 2;

--9
insert into Warehouses (code, location,capacity)
VALUES (6 ,'Texas', 5);

--10
INSERT INTO Packs(code, contents, value, warehouses)
VALUES('H5RT','Papers',150, 2);

--11
UPDATE Packs
SET value = value * 0.82
WHERE code = (
    SELECT code
    FROM (
        SELECT code, value, ROW_NUMBER() OVER (ORDER BY value DESC) AS rank
        FROM Packs
    ) ranked_packs
    WHERE rank = 3
);

UPDATE Packs
SET value = value * 0.82
WHERE value =
      (SELECT value FROM Packs ORDER BY value DESC OFFSET 2 LIMIT 1);

--12
DELETE from Packs
    WHERE value < 150;

--13
DELETE from Packs
    WHERE warehouses = (
        SELECT code from Warehouses
                  where location = 'Chicago'
        )
RETURNING *;


drop table Warehouses;
drop table Packs;
drop database lab_4;