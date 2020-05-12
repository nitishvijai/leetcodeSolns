// Power of Two
// Written by Nitish Vijai on 4/12/2020
// Runtime: 0ms, faster than 100% of all C++ solutions
// Memory: 6.2 MB, less than 100% of all C++ solutions

class Solution {
public:
	bool isPowerOfTwo(int n) {
		if (n == 1 || n == 2) {
			return true;
		}
		else if (n % 2 == 1 || n <= 0) {
			return false;
		}

		return isPowerOfTwo(n / 2.0);
	}
};

