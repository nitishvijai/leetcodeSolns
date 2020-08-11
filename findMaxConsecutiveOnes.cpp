// Max Consecutive Ones
// Written by Nitish Vijai on 8/1/2020
// Runtime: 84ms, faster than 87.90% of all C++ solutions
// Memory: 36.3 MB, less than 60.13% of all C++ solutions

class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>& nums) {
		int maximum = 0;
		int currNum = 0;
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] == 1) {
				++currNum;
			}
			if (nums[i] == 0 || i == nums.size() - 1) {
				if (currNum > maximum) {
					maximum = currNum;
				}
				currNum = 0;
			}
		}

		return maximum;
	}
};
