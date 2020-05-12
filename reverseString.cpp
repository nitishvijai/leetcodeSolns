// Reverse String
// Written by Nitish Vijai on 4/12/2020
// Runtime: 56ms, faster than 51.38% of all C++ solutions
// Memory: 12.8 MB, less than 100.0% of all C++ solutions

class Solution {
public:
	void reverseString(vector<char>& s) {
		int i = 0;
		int j = s.size() - 1;
		while (i < j) {
			char temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			++i;
			--j;
		}
	}
};
