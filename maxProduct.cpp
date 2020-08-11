// Maximum Product of Two Elements in an Array
// Written by Nitish Vijai on 8/9/2020
// Runtime: 12ms, faster than 74.81% of all submissions
// Memory: 10 MB, less than 78.77% of all submissions

/* Description:
 * Given the array of integers nums, you will choose two different indices i and
 * j of that array. Return the maximum value of (nums[i] - 1) * (nums[j] - 1).
 */

class Solution {
public:
	int maxProduct(vector<int>& nums) {
		int product = 0;
		// find the first maximum
		int max1 = 0;
		int position = 0;
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] > max1) {
				max1 = nums[i];
				position = i;
			}
		}
		nums[position] = 0;

		// find the second maximum
		int max2 = -1;
		for (int j = 0; j < nums.size(); ++j) {
			if (nums[j] > max2) {
				max2 = nums[j];
			}
		}

		return (max1 - 1) * (max2 - 1);
	}
};
