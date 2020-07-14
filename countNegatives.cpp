// Count Negative Numbers in a Sorted Matrix
// Written by Nitish Vijai on 7/14/2020
// Runtime: 36ms, faster than 77.60% of all C++ solutions
// Memory: 10.7 MB, less than 46.29% of all C++ solutions

class Solution {
public:
	int countNegatives(vector<vector<int>>& grid) {
		int negatives = 0;
		for (int m = 0; m < grid.size(); ++m) {
			for (int n = 0; n < grid[m].size(); ++n) {
				if (grid[m][n] < 0) {
					++negatives;
				}
			}
		}
		return negatives;
	}
};
