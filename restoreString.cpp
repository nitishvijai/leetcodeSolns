// Shuffle String
// Written by Nitish Vijai on 7/30/2020
// Runtime: 12ms, faster than 93.80% of all C++ solutions
// Memory: 15.4 MB, less than 36.41% of all C++ solutions

class Solution {
public:
	string restoreString(string s, vector<int>& indices) {
		string newS;

		for (int i = 0; i < s.size(); ++i) {
			int index = 0;
			for (int j = 0; j < s.size(); ++j) {
				if (indices[j] == i) {
					index = j;
					break;
				}
			}
			newS += s[index];
		}

		return newS;
	}
};
