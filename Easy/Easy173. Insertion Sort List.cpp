/*

requirements

173. Insertion Sort List
中文English
Sort a linked list using insertion sort.

样例
Example 1:
	Input: 0->null
	Output: 0->null


Example 2:
	Input:  1->3->2->0->null
	Output :0->1->2->3->null
*/

/**
 * Definition of singly-linked-list:
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @return: The head of linked list.
     */
    ListNode * insertionSortList(ListNode * head) {
        // write your code here
		if (head == nullptr)
			return head;
		//The first node sorted already
		ListNode* firstNode = head;
		//The last node sorted already
		ListNode* lastNode = head;
		//The next node needed to be sorted
		ListNode* nextNode = head->next;
		while (nextNode != nullptr)
		{
			if (nextNode->val >= lastNode->val)
			{
				lastNode = nextNode;
				nextNode = nextNode->next;
			}
			else if (nextNode->val <= firstNode->val)
			{
				auto tmp = nextNode;
				nextNode = nextNode->next;
				lastNode->next = nextNode;
				tmp->next = firstNode;
				firstNode = tmp;
			}
			else
			{
				auto tmp = nextNode;
				nextNode = nextNode->next;
				lastNode->next = nextNode;
				auto pre = firstNode;
				for (auto cur = firstNode; cur != lastNode->next; cur = cur->next)
				{
					if (tmp->val <= cur->val)
					{
						tmp->next = cur;
						pre->next = tmp;
						break;
					}
					if (cur != firstNode)
					{
						pre = pre->next;
					}
				}
			}
		}
		return firstNode;
    }
};