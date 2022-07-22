select distinct a.num as ConsecutiveNums
from Logs a,Logs b, Logs c
where b.id=a.id+1 and c.id=b.id+1 and a.num=b.num and b.num=c.num;