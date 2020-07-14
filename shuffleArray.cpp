// Shuffle the Array
// Written by Nitish Vijai on 7/14/2020
// Runtime: 32ms, faster than 9.19% of all C++ solutions
// Memory: 10 MB, less than 100.00% of all C++ solutions

class Solution {
public:
	vector<int> shuffle(vector<int>& nums, int n) {
		vector<int> ans;
		for (int i = 0; i < n; ++i) {
			ans.push_back(nums[i]);
			ans.push_back(nums[i] + n);
		}
		return ans;
	}
};

