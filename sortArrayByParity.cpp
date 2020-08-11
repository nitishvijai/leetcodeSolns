// Sort Array By Parity
// Written by Nitish Vijai on 8/9/2020
// Runtime: 24ms, faster than 44.30% of all submissions
// Memory: 16.7 MB, less than 12.43% of all submissions

/* Description:
 * Given an array A of non-negative integers, return an array consisting of all
 * the even elements of A, followed by all the odd elements of A.
 *
 * You may return any answer array that satisfies this condition.
 */

class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A) {
		vector<int> answer;
		for (int i = 0; i < A.size(); ++i) {
			if (A[i] % 2 == 0) {
				answer.push_back(A[i]);
			}
		}

		for (int i = 0; i < A.size(); ++i) {
			if (A[i] % 2 != 0) {
				answer.push_back(A[i]);
			}
		}

		return answer;
	}
};
