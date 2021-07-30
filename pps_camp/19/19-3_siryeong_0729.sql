# Write your MySQL query statement below
SELECT
( SELECT DISTINCT(Salary) SecondHighestSalary 
 From Employee ORDER BY Salary DESC LIMIT 1 offset 1) as SecondHighestSalary;