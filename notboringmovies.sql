-- Not Boring Movies
-- Written by Nitish Vijai on 4/12/2020
-- Runtime: 694ms, faster than 46.12% of all Oracle submissions
-- Memory: 0 B, less than 100.00% of all Oracle submissions

SELECT ID, MOVIE, DESCRIPTION, RATING FROM cinema WHERE description <> 'boring' AND MOD(id, 2) <> 0 ORDER BY rating DESC;
