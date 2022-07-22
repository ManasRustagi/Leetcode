# Write your MySQL query statement below
select class from 
(select class, count(student) as C
from Courses 
group by class) e
where C>=5;