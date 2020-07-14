// Number of Good Pairs
// Written by Nitish Vijai on 7/14/2020
// Runtime: 4ms, faster than 75.00% of all C++ solutions
// Memory: 7.3 MB, less than 100.00% of all C++ solutions

class Solution {
public:
	int numIdenticalPairs(vector<int>& nums) {
		if (nums.size() < 2) {
			return 0;
		}
		else {
			int pairs = 0;
			for (int i = 0; i < nums.size() - 1; ++i) {
				for (int j = i + 1; j < nums.size(); ++j) {
					if (nums[i] == nums[j]) {
						++pairs;
					}
				}
			}
			return pairs;
		}
	}
};

