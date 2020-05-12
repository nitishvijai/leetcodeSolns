// Middle of the Linked List
// Written by Nitish Vijai on 4/28/2020
// Runtime: 0ms, faster than 100% of all C++ solutions
// Memory: 6.7 MB, less than 100% of all C++ solutions

class Solution {
public:
	ListNode* middleNode(ListNode* head) {
		int count = 0;
		for (ListNode* ptr = head; ptr; ptr = ptr->next) {
			++count;
		}
		count /= 2;

		int i = 0;
		for (ListNode* ptr = head; ptr; ptr = ptr->next) {
			if (i == count) {
				return ptr;
			}
			++i;
		}
		return nullptr;
	}
};

