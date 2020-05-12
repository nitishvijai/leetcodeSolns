// Replace Elements with Greatest Element on Right Side
// Written by Nitish Vijai on 4/12/2020
// Runtime: 1864ms, faster than 5.11% of all C++ solutions
// Memory: 8.4 MB, less than 100.00% of all C++ solutions

class Solution {
public:
	vector<int> replaceElements(vector<int>& arr) {
		int max = 0;
		for (int i = 0; i < arr.size() - 1; ++i) {
			max = 0;
			for (int j = i + 1; j < arr.size(); ++j) {
				if (max < arr[j]) {
					max = arr[j];
				}
			}
			arr[i] = max;
		}	
		arr[arr.size() - 1] = -1;
		return arr;
	}
};
