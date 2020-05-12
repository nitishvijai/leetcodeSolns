// Search in a Binary Search Tree
// Written by Nitish Vijai on 4/12/2020
// Runtime: 52ms, faster than 71.69% of all C++ solutions
// Memory: 26.7 MB, less than 100.0% of all C++ solutions

class Solution {
public:
	TreeNode* searchBST(TreeNode* root, int val) {
		TreeNode* ans;
		if (root == nullptr) {
			return nullptr;
		}
		if (root->val == val) {
			return root;
		}
		if (val < root->val) {
			ans = searchBST(root->left, val);
		}
		else {
			ans = searchBST(root->right, val);
		}
		return ans;
	}
};

