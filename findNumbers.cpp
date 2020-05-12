// Find Numbers with Even Number of Digits
// Written by Nitish Vijai on 4/12/2020
// Runtime: 4ms, faster than 97.50% of all C++ solutions
// Memory: 6.8 MB, less than 100.0% of all C++ solutions

class Solution {
public:
	int findNumbers(vector<int>& nums) {
		int ans;
		for (int i = 0; i < nums.size(); ++i) {
			int number = nums[i];
			int digits = 0;
			while (number > 0) {
				number /= 10;
				++digits;
			}
			if (digits % 2 == 0) {
				++ans;
			}
		}
		return ans;
	}
};
