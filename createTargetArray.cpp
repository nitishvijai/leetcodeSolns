// Create Target Array in Given Order
// Written by Nitish Vijai on 5/24/2020
// Runtime: 4ms, faster than 52.7% of online C++ solutions
// Memory: 8.4 MB, less than 100% of online C++ solutions

class Solution {
public:
	vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
		vector<int> target;

		for (int i = 0; i < nums.size(); ++i) {
			target.insert(target.begin() + index[i], nums[i]);
		}

		return target;
	}
};
