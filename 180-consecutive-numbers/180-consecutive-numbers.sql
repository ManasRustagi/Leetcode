select distinct a.num as ConsecutiveNums
from Logs a
where 
a.num=(select b.num from logs b where b.id>a.id order by b.id limit 1 offset 0) and 
a.num=(select c.num from logs c where c.id>a.id order by c.id limit 1 offset 1) 