-- 1. Write a SQL query using Joins:
--
-- a. find those clients with a priority less than 300
SELECT *
FROM client
WHERE priority < 300;

-- b. combine each row of dealer table with each row of client table
SELECT * FROM dealer
CROSS JOIN client;

-- c. find all dealers along with client name, city, priority, sell number, date, and amount
SELECT d.name, d.id, c.name, c.city, c.priority, s.id, s.date,  s.amount
FROM dealer d
JOIN client c ON d.id = c.dealer_id
JOIN sell s ON c.id = s.client_id;asd

-- e. find sell id, amount, client name, city those sells where sell amount exists between 200 and 500.
SElECT s.id, s.amount, c.name, c.city
FROM sell s
JOIN client c ON s.amount BETWEEN 200 AND 500;

-- f. find dealers who works either for one or more client or not yet join under any of the clients.
SELECT *
FROM dealer d
LEFT JOIN sell s ON d.id = s.dealer_id
WHERE s.dealer_id IS NOT NULL OR s.dealer_id IS NULL;

-- g. find the dealers and the clients he service, return client name, city, dealer name, commission.
SELECT c.name, c.city, d.name, d.commission
FROM client c
JOIN sell s ON c.id = s.client_id
JOIN dealer d ON d.id = s.dealer_id;

-- h. find client name, client city, dealer, commission
-- those dealers who received a commission from the sell more than 13%
SELECT c.name, c.city, d.name, d.commission
FROM client c
JOIN sell s ON c.id = s.client_id
JOIN dealer d ON d.id = s.dealer_id
WHERE d.commission > 0.13;

-- i. make a report with client name, city, sell id, sell date, sell amount, dealer name and commission to find that either any of the existing clients haven’t made a purchase(sell) or made one or more purchase(sell) by their dealer or by own.
SELECT c.name, c.city, s.id, s.amount, d.name, d.commission
FROM client c
LEFT JOIN sell s ON c.id = s.client_id
LEFT JOIN dealer d ON d.id = c.dealer_id
wHERE s.id IS NULL OR s.id IS NOT NULL;

-- j. find dealers who either work for one or more clients.
-- The client may have made, either one or more purchases,
-- or purchase amount above 2000 and must have a priority,
-- or he may not have made any purchase to the associated dealer.
-- Print client name, client priority, dealer name, sell id, sell amount.
SELECT c.name, c.priority, d.id, d.name, s.id, s.amount
FROM dealer d
JOIN client c on d.id = c.dealer_id
LEFT JOIN sell s on c.id = s.client_id
WHERE(s.id is not null AND (s.amount > 2000 OR c.priority is not null)) OR s.id is null;

-- 2
-- a. count the number of unique clients, compute average and total purchase amount of client orders by each date.
CREATE VIEW client_order_summary AS
SELECT s.date, count(distinct s.client_id), avg(s.amount), sum(s.amount)
FROM sell s
GROUP BY s.date;

SELECT * FROM client_order_summary;

--b. find top 5 dates with the greatest total sell amount.

CREATE VIEW top5 AS
    SELECT s.id, s.date, sum(s.amount) AS sumi
    FROM sell s
    GROUP BY s.id
    ORDER BY sumi DESC
    LIMIT 5;

SELECT * FROM top5;

--c. count the number of sales, compute average and total amount of all sales of each dealer.
CREATE VIEW numi AS
    SELECT d.id, d.name,  count(s.id), avg(s.amount), sum(s.amount)
    FROM dealer d
    LEFT JOIN sell s on d.id = s.dealer_id
    LEFT JOIN client c on d.id = c.dealer_id
    GROUP BY d.id, d.name;

SELECT * FROM numi;

    --d. compute how much all dealers earned from commission (total sell amount *commission) in each location.
CREATE VIEW howi AS
    SELECT  d.location, sum(s.amount * d.commission)
    FROM dealer d
    LEFT JOIN sell s ON d.id = s.dealer_id
    LEFT JOIN client c ON d.id = c.dealer_id
    GROUP BY d.location;

SELECT * FROM howi;

    --e. compute number of sales, average and total amount of all sales dealers made in each location.
CREATE VIEW compi AS
    SELECT d.location, count(s.id), avg(s.amount), sum(s.amount)
    FROM dealer d
    LEFT JOIN client c ON d.id = c.dealer_id
    LEFT JOIN sell s ON d.id = s.dealer_id
    GROUP BY d.location;

SELECT * FROM compi;

    --f. compute number of sales, average and total amount of expenses in each city clients made
CREATE VIEW sushi AS
    SELECT c.city, COUNT(s.id) , AVG(s.amount), SUM(s.amount)
    FROM client c
    LEFT JOIN sell s ON c.id = s.client_id
    LEFT JOIN dealer d ON s.dealer_id = d.id
    GROUP BY c.city;

SELECT * FROM sushi;

    --g. find cities where total expenses more than total amount of sales in locations.
CREATE VIEW city_sales_expenses_summary AS
SELECT
    c.city,
    COUNT(s.id) AS total_sales_count,
    AVG(s.amount) AS average_sale_amount,
    SUM(s.amount) AS total_sale_amount,
    SUM(s.amount) AS total_expenses_amount
FROM
    client c
LEFT JOIN
    sell s ON c.id = s.client_id
GROUP BY
    c.city;

SELECT * FROM city_sales_expenses_summary;




CREATE VIEW hhh AS
    SELECT s.date, sum(s.amount) as suuum
    FROM sell s
    GROUP BY s.date
    order by suuum DESC
    limit 5;

Select * from hhh;