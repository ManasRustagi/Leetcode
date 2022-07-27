# Write your MySQL query statement below
SELECT request_at as Day,
ROUND((SUM(IF(status != "completed",1,0))/count(status)),2) AS 'Cancellation Rate'
FROM Trips
WHERE request_at>='2013-10-01' and request_at<='2013-10-03'
AND client_id NOT IN (SELECT users_id FROM Users WHERE banned="Yes")
AND driver_id NOT IN (SELECT users_id FROM Users WHERE banned="Yes")
group by Day;