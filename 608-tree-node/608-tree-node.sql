# Write your MySQL query statement below
select id, 
CASE
WHEN p_id is null then "Root"
When id not in (select p_id from Tree where p_id is not null) then "Leaf"
else "Inner" end as Type
FROM Tree
order by id;