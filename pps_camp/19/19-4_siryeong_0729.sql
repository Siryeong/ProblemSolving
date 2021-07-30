# Write your MySQL query statement below
SELECT DISTINCT(Email) FROM Person Group By Email Having Count(*) > 1;