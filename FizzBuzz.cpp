// Fizz Buzz
// Written by Nitish Vijai on 4/23/2020
// Runtime: 12 ms, faster than 24.69% of online C++ solutions
// Memory: 8.1 MB, less than 100% of all online C++ solutions

class Solution {
public:
	vector<string> fizzBuzz(int n) {
		vector<string> ans;
		for (int i = 1; i <= n; ++i) {
			if (i % 3 == 0 && i % 5 == 0) {
				ans.push_back("FizzBuzz");
			}
			else if (i % 3 == 0) {
				ans.push_back("Fizz");
			}
			else if (i % 5 == 0) {
				ans.push_back("Buzz");
			}
			else {
				ans.push_back(to_string(i));
			}
		}
		return ans;
	}
};
