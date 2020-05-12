// Fibonacci Number
// Written by Nitish Vijai on 4/12/2020
// Runtime: 12ms, faster than 24.57% of all C++ solutions
// Memory: 6.1 MB, less than 100.00% of all C++ solutions

class Solution {
public:
	int fib(int N) {
		if (N == 0) { return 0; }
		else if (N == 1) { return 1; }

		return fib(N - 1) + fib(N - 2);
	}
};
