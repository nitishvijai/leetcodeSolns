// Move Zeroes
// Written by Nitish Vijai on 8/10/2020
// Runtime: 8ms, faster than 93.49% of all submissions
// Memory: 9.2 MB, less than 17.07% of all submissions

/* Description:
 *
 * Given an array nums, write a function to move all 0's to the end of it while
 * maintaining the relative order of the non-zero elements.
 */

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int index = 0;
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] != 0) {
				nums[index++] = nums[i];
			}
		}

		for (int i = index; i < nums.size(); ++i) {
			nums[i] = 0;
		}
	}
};
