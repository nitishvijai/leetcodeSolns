// Peak Index In Mountain Array
// Written by Nitish Vijai on 4/28/2020
// Runtime: 12ms, faster than 94.65% of all C++ solutions
// Memory: 7.1 MB, less than 100.00% of all C++ solutions
//

class Solution {
public:
	int peakIndexInMountainArray(vector<int>& A) {
		int max_element = 0;
		int max_index = 0;
		for (int i = 0; i < A.size(); ++i) {
			if (max_element < A[i]) {
				max_element = A[i];
				max_index = i;
			}
		}
		return max_index;
	}
};
