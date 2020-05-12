// How Many Numbers Are Smaller Than The Current Number
// Written by Nitish Vijai on 4/12/2020
// Runtime: 104ms, faster than 7.40% of all C++ solutions
// Memory: 6.9 MB, less than 100.00% of all C++ solutions

class Solution {
public:
	vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
		vector<int> ans;
		for (int i = 0; i < nums.size(); ++i) {
			int count = 0;
			for (int j = 0; j < nums.size(); ++j) {
				if (j != i && nums[j] < nums[i]) {
					++count;
				}
			}
			ans.push_back(count);
		}
		return ans;
	}
};
