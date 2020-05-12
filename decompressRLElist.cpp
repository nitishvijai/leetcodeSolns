// Decompress Run-Length Encoded List
// Written by Nitish Vijai on 4/12/2020
// Runtime: 44ms, faster than 77.95% of all C++ solutions
// Memory: 8.4 MB, less than 100.00% of all C++ solutions

class Solution {
public:
	vector<int> decompressRLElist(vector<int>& nums) {
		vector<int> ans;
		for (int i = 1; i < nums.size(); i += 2) {
			for (int j = 0; j < nums[i - 1]; ++j) {
				ans.push_back(nums[i]);
			}
		}
		return ans;
	}
};
