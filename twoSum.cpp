// Two Sum
// Written by Nitish Vijai on 4/12/2020
// Runtime: 646 ms, faster than 6.16% of all C++ solutions
// Memory: 7.3 MB, less than 100.00% of all C++ solutions

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> ans;
		for (int i = 0; i < nums.size(); ++i) {
			for (int j = i + 1; j < nums.size(); ++j) {
				if (nums[i] + nums[j] == target) {
					ans.push_back(i);
					ans.push_back(j);
					break;
				}
			}
		}
	}
};

