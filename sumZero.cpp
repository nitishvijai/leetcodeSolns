// Find N Unique Integers Sum up to Zero
// Written by Nitish Vijai on 4/12/2020
// Runtime: 4ms, faster than 98.05% of all C++ solutions
// Memory: 6.3 MB, less than 100.00% of all C++ solutions

class Solution {
public:
	vector<int> sumZero(int n) {
		vector<int> ans;
		if (n == 1) {
			ans.push_back(0);
			return ans;
		}
		if (n % 2 == 0) {
			for (int i = 1; i <= n/2; ++i) {
				ans.push_back(i);
				ans.push_back(i * -1);
			}
		}
		else {
			ans.push_back(0);
			for (int i = 1; i <= n/2; ++i) {
				ans.push_back(i);
				ans.push_back(i * -1);
			}
		}
		return ans;
	}
};
