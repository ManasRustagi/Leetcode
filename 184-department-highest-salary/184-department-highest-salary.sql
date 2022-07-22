# Write your MySQL query statement below
select d.name as Department, e.name as Employee, e.salary as Salary from
(select departmentId,name,salary,dense_rank() over (partition by departmentId order by salary desc) as r from Employee) e
inner join Department d
on e.departmentId=d.id
where r<=1;