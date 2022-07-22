# Write your MySQL query statement below
select d.name as Department, e.name Employee, e.salary as Salary
from Employee e inner join Department d
on e.departmentId=d.id
where Salary = (select max(salary) from Employee s where e.departmentId=s.departmentId);