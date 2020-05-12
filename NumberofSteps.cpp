// Number of Steps
// Written by Nitish Vijai on 4/12/2020
// Runtime: 0ms, faster than 100% of all C++ solutions
// Memory: 6 MB, less than 100% of all C++ solutions

class Solution {
public:
	int numberOfSteps (int num) {
		int steps = 0;
		while (num > 0) {
			if (num % 2 == 0) {
				num /= 2;
				++steps;
			}
			else {
				--num;
				++steps;
			}
		}
		return steps;
	}
};
