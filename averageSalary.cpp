// Average Salary Excluding the Minimum and Maximum Salary
// Written by Nitish Vijai on 8/9/2020
// Runtime: 4ms, faster than 58.86% of all submissions
// Memory: 7.4 MB, less than 05.44% of all submissions

/* Description:
 * Given an array of unique integers salary where salary[i] is the salary of the
 * employee i.
 *
 * Return the average salary of employees excluding the minimum and maximum
 * salary.
 */

class Solution {
public:
	double average(vector<int>& salary) {
		double answer = 0;

		// calculate minimum and maximum salary
		int maxSalary = 0;
		int maxPos = 0;
		int minSalary = salary[0];
		int minPos = 0;

		for (int i = 0; i < salary.size(); ++i) {
			if (salary[i] > maxSalary) {
				maxSalary = salary[i];
				maxPos = i;
			}

			if (salary[i] < minSalary) {
				minSalary = salary[i];
				minPos = i;
			}
		}

		salary[maxPos] = 0;
		salary[minPos] = 0;

		for (int i = 0; i < salary.size(); ++i) {
			answer += salary[i];
		}

		answer /= (salary.size() - 2);

		return answer;
	}
};
