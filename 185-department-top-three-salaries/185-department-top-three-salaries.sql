# Write your MySQL query statement below
select d.name as Department,e.name as Employee,e.salary as Salary from
Employee e join Department d on
e.departmentId=d.id
where 3> 
(select count(distinct Salary) from 
Employee e2 
where Salary>e.salary 
and e.departmentID=e2.departmentID)
order by d.ID,e.salary desc;

