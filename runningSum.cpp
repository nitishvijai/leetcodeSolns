// Running Sum of 1D Array
// Written by Nitish Vijai on 7/14/2020
// Runtime: 8ms, faster than 40.97% of all C++ online solutions
// Memory: 8.6 MB, less than 80.00% of all C++ online solutions

class Solution {
public:
	vector<int> runningSum(vector<int>& nums) {
		if (nums.size() < 2) {
			return nums;
		}
		else {
			vector<int> ans;
			ans.push_back(nums[0]);
			for (int i = 1; i < nums.size(); ++i) {
				ans.push_back(nums[i] + ans[i - 1]);
			}
			return ans;
		}
	}
};
