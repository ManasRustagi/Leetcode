# Write your MySQL query statement below
select distinct a.* 
from Stadium a inner join Stadium b inner join Stadium c
on (a.id+1=b.id and a.id+2=c.id)
OR (a.id-1=b.id and a.id+1=c.id)
OR (a.id-2=b.id and a.id-1=c.id )
where a.people>=100 and b.people>=100 and c.people>=100
order by visit_date;