// Contains Duplicate - Solution 1 (Standard Sort)
// Written by Nitish Vijai on 8/9/2020
// Runtime: 56ms, faster than 97.19% of all submissions
// Memory: 15.5 MB, less than 90.57% of all submissions

/* Description:
 *
 * Given an array of integers, find if the array contains any duplicates.
 *
 * Your function should return true if any value appears at least twice in the 
 * array, and it should return false if every element is distinct.
 */

class Solution {
public:
	bool containsDuplicate_ONE(vector<int>& nums) {
		if (nums.size() == 0) { return false; }
		sort(nums.begin(), nums.end());

		for (int i = 0; i < nums.size() - 1; ++i) {
			if (nums[i] == nums[i + 1]) {
				return true;
			}
		}

		return false;
	}
};

// Contains Duplicate - Solution 2 (Map)
// Runtime: 116ms, faster than 21.31% of all submissions
// Memory: 20.8 MB, less than 33.39% of all submissions

class AltSolution {
public:
	bool containsDuplicate_TWO(vector<int>& nums) {
		if (nums.size() == 0) { return false; }
		map<int, int> frequencies;

		for (int i = 0; i < nums.size(); ++i) {
			frequencies[nums[i]]++;

			if (frequencies[nums[i]] > 1) {
				return true;
			}
		}
		
		return false;
	}
};
