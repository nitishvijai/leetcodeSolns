// N-Repeated Element in Size 2N Array
// Written by Nitish Vijai on 7/28/2020
// Runtime: 248ms, faster than 6.12% of C++ online solutions
// Memory: 31.6 MB, less than 6.12% of C++ online solutions
// ^^^ yeah... it's pretty obvious I need a faster version

class Solution {
public:
	int repeatedNTimes(vector<int>& A) {
		int answer = 0;
		std::map<int, int> counts;

		for (int i = 0; i < A.size(); ++i) {
			if (counts.find(A[i]) != counts.end()) {
				// iterate the value
				counts[A[i]] += 1;
			}
			else {
				// generate new key
				counts[A[i]] = 1;
			}
		}

		int corrSize = A.size() / 2;

		for (auto it = counts.begin(); it != counts.end(); ++it) {
			if (it->second == corrSize) {
				answer = it->first;
			}
		}

		return answer;
	}
};
