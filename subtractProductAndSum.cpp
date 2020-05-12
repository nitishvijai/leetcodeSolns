// Subtract the Product and Sum of Digits of an Integer
// Written by Nitish Vijai on 4/12/2020
// Runtime: 4ms, faster than 16.38% of all C++ solutions
// Memory: 5.9 MB, less than 100% of all C++ solutions

class Solution {
public:
	int subtractProductAndSum(int n) {
		int prod = 1;
		int sum = 0;
		while (n > 0) {
			int lastDigit = n % 10;
			prod *= lastDigit;
			sum *= lastDigit;
			n /= 10;
		}
		return prod - sum;
	}
};
