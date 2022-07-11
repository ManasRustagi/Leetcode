# Write your MySQL query statement below
with cte as
(select buyer_id,count(if(order_date >= '2019-01-01' and order_date < '2020-01-01',buyer_id,null)) as count
from Orders
group by buyer_id)

select u.user_id as buyer_id,u.join_date, ifnull(t.count,0) as orders_in_2019
from Users u left join cte t
on u.user_id=t.buyer_id;