// Can Make Arithmetic Progression From Sequence
// Written by Nitish Vijai on 7/14/2020
// Runtime: 4ms, faster than 99.38% of all C++ solutions
// Memory: 8.9 MB, less than 100.00% of all C++ solutions

class Solution {
public:
	bool canMakeArithmeticProgression(vector<int>& arr) {
		if (arr.size() <= 2) {
			return true;
		}
		else {
			sort(arr.begin(), arr.end());
			int diff = arr[1] - arr[0];
			for (int i = 2; i < arr.size(); ++i) {
				if (arr[i] - arr[i - 1] != diff) {
					return false;
				}
			}
			return true;
		}
	}
};
