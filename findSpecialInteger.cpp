// Element Appearing More Than 25% in Sorted Array
// Written by Nitish Vijai on 8/9/2020
// Runtime: 48ms, faster than 23.11% of all submissions
// Memory: 14.2 MB, less than 11.86% of all submissions

/* Description:
 *
 * Given an integer array sorted in non-decreasing order, there is exactly one
 * integer in the array that occurs more than 25% of the time.
 *
 * Return that integer.
 */

class Solution {
public:
	int findSpecialInteger(vector<int>& arr) {
		int majorityElement = arr[0];
		map<int, int> frequencies;

		for (int i = 0; i < arr.size(); ++i) {
			frequencies[arr[i]]++;
		}

		int maxThreshold = arr.size() * 0.25;

		for (auto it = frequencies.begin(); it != frequencies.end(); ++it) {
			if (it->second > maxThreshold) {
				majorityElement = it->first;
			}
		}

		return majorityElement;
	}
};
