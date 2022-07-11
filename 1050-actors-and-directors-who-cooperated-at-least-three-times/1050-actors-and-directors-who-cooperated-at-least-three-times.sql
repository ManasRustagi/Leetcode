# Write your MySQL query statement below
select actor_id , director_id from (select actor_id,director_id,count(timestamp) as count
from ActorDirector
group by actor_id,director_id) b
where count>=3;