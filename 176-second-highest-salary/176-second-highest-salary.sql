# Write your MySQL query statement below
with cte as
(select*, dense_rank() over(order by salary desc) as R
from Employee)

select ifnull((select salary from cte where r=2 limit 1),null) as SecondHighestSalary;