// Majority Element
// Written by Nitish Vijai on 8/9/2020
// Runtime: 48ms, faster than 74.51% of all submissions
// Memory: 19.7 MB, less than 62.74% of all submissions

/* Description:
 *
 * Given an array of size n, find the majority element. The majority element is
 * the element that appears more than |n / 2| times.
 *
 * You may assume that the array is non-empty and the majority element always
 * exists in the array.
 */

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		map<int, int> frequencies;

		for (int i = 0; i < nums.size(); ++i) {
			frequencies[nums[i]]++;
		}

		int large = 0, pos = 0;

		for (auto it = frequencies.begin(); it != frequencies.end(); ++it) {
			if ((*it).second > large) {
				large = (*it).second;
				pos = (*it).first;
			}
		}

		return pos;

	}
};
