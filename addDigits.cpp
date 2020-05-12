// Add Digits
// Written by Nitish Vijai on 4/12/2020
// Runtime: 4ms, faster than 48.24% of all C++ solutions
// Memory: 5.9 MB, less than 100.0% of all C++ solutions

class Solution {
public:
	int addDigits(int num) {
		while (num > 9) {
			int lastDigit = num % 10;
			int pDigit = num / 10;
			num = pDigit + lastDigit;
		}
		return num;
	}
};

