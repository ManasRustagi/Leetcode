# Write your MySQL query statement below
with cte as
(select distinct salary  from Employee 
order by salary desc
limit 1 offset 1)
select ifnull((select salary from cte),null) as SecondHighestSalary;