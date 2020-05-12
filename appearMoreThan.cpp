// Element Appearing More than 25% in Sorted Array
// Written by Nitish Vijai on 4/12/2020
// Runtime: 12ms, faster than 97.80% of all C++ solutions
// Memory: 7.1 MB, less than 100.00% of all C++ solutions

class Solution {
public:
	int findSpecialInteger(vector<int>& arr) {
		if (arr.size() == 1) { return arr[0]; }

		int selectSize = arr.size() / 4;
		int ans = 0;
		int count = 0;
		for (int i = 1; i < arr.size(); ++i) {
			if (arr[i] = arr[i - 1]) {
				ans = arr[i];
				++count;
			}
			else {
				count = 0;
			}
			if (count >= selectSize) {
				return ans;
			}
		}
		return ans;
	}
};
