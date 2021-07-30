# Write your MySQL query statement below
SELECT FirstName, LastName, City, State 
FROM Person Left Join Address Using(PersonId);