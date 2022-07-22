# Write your MySQL query statement below
select s.score , (SELECT count(distinct(Score)) from Scores m where m.score>=s.score ) as 'rank'
from Scores s
order by s.score desc;