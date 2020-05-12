-- Big Countries
-- Written by Nitish Vijai on 4/12/2020
-- Runtime: 697ms, faster than 37.03% of Oracle solutions
-- Memory: 0 B, less than 100% of Oracle solutions

SELECT name, population, area FROM World WHERE area > 3000000 OR population > 25000000;
