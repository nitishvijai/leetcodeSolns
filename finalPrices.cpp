// Final Prices With a Special Discount in a Shop
// Written by Nitish Vijai on 8/9/2020
// Runtime: 8ms, faster than 84.21% of all submissions
// Memory: 10 MB, less than 55.55% of all submissions

/* Description:
 *
 * Given the array prices where prices[i] is the price of the ith item in a shop,
 * there is a special discount for items in the shop. If you buy the ith item, 
 * then you will receive a discount equivalent to prices[j], where j is the
 * minimum index such that j > i and prices[j] <= prices[i], otherwise, you will
 * not receive any discount at all.
 *
 * Return an array where the ith element is the final price you will pay for the
 * ith item of the shop considering the special discount.
 */

class Solution {
public:
	vector<int> finalPrices(vector<int>& prices) {
		for (int i = 0; i < prices.size(); ++i) {
			int discount = 0;
			for (int j = i + 1; j < prices.size(); ++j) {
				if (prices[j] <= prices[i]) {
					discount = prices[j];
					break;
				}
			}
			prices[i] -= discount;
		}
		return prices;
	}
};
