// Number of Jewels in Stones
// Written by Nitish Vijai on 4/12/2020
// Runtime: 0ms, faster than 100% of all C++ solutions
// Memory: 6.1 MB, less than 100% of all C++ solutions

class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int jewels = 0;
		for (int i = 0; i < J.size(); ++i) {
			for (int j = 0; j < S.size(); ++j) {
				if (J[i] == S[j]) {
					++jewels;
				}
			}
		}
		return jewels;
	}
};
