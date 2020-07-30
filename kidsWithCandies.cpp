// Kids With the Greatest Number of Candies
// Written by Nitish Vijai on 7/30/2020
// Runtime: 4ms, faster than 86.27% of all C++ solutions
// Memory: 9.1 MB, less than 39.81% of all C++ solutions

class Solution {
public:
	vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
		vector<bool> answer;

		int maximum = candies[0];

		for (int i = 0; i < candies.size(); ++i) {
			if (candies[i] > maximum) {
				maximum = candies[i];
			}
		}

		for (int i = 0; i < candies.size(); ++i) {
			if (candies[i] + extraCandies < maximum) {
				answer.push_back(false);
			}
			else {
				answer.push_back(true);
			}
		}

		return answer;
	}
};