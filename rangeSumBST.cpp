// Range Sum of BST
// Written by Nitish Vijai on 8/4/2020
// Runtime: 316ms, faster than 13.72% of all C++ solutions
// Memory: 64.6 MB, less than 93.21% of all C++ solutions

/* Given the root node of a binary search tree, return the sum
 * of all nodes with value between L and R (inclusive).
 *
 * The binary search tree is guaranteed to have unique values
 * */

/*
 * TreeNode definition:
 * struct TreeNode {
 * 	int val;
 * 	TreeNode *left;
 * 	TreeNode *right;
 * 	TreeNode() : val(0), left(nullptr), right(nullptr) {}
 * 	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * 	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * */

class Solution {
public:
	int rangeSumBST(TreeNode* root, int L, int R) {
		int answer = 0;
		if (root->val >= L && root->val <= R) {
			answer += root->val;
		}

		if (root->left != nullptr) {
			answer += rangeSumBST(root->left, L, R);
		}
		if (root->right != nullptr) {
			answer += rangeSumBST(root->right, L, R);
		}

		return answer;
	}
};
