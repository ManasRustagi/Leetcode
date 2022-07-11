# Write your MySQL query statement below
select name from SalesPerson s where sales_id  NOT IN
(select sales_id from Orders where com_id =
 (select com_id from Company where name = 'RED'));