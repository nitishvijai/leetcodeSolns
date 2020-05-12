// To Lower Case
// Written by Nitish Vijai on 4/12/2020
// Runtime: 0ms, faster than 100% of all C++ solutions
// Memory: 6.1 MB, less than 100% of all C++ solutions

class Solution {
public:
	string toLowerCase(string str) {
		string newStr = "";
		for (int i = 0; i < str.size(); ++i) {
			if (str[i] < 97 && str[i] > 64) {
				newStr += (str[i] + 32);
			}
			else {
				newStr += str[i];
			}
		}
		return newStr;
	}
};
