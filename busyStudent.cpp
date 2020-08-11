// Number of Students Doing Homework at a Given Time
// Written by Nitish Vijai on 8/8/2020
// Runtime: 4 ms, faster than 87.10% of all submissions
// Memory: 11.1 MB, less than 45.45% of all submissions

/* 
 * Description:
 * Given two integer arrays startTime and endTime and an integer queryTime,
 * return the number of students doing their homework at time queryTime.
 *
 * The ith student started doing their homework at time startTime[i] and
 * finished at time endTime[i].
 * */

class Solution {
public:
	int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
		int count = 0;
		for (int i = 0; i < startTime.size(); ++i) {
			if (queryTime >= startTime[i] && queryTime <= endTime[i]) {
				++count;
			}
		}
		return count;
	}
};
