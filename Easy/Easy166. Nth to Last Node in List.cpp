/*

requirements
166. Nth to Last Node in List
中文English
Find the nth to last element of a singly linked list. 

The minimum number of nodes in list is n.
样例
Example 1:
	Input: list = 3->2->1->5->null, n = 2
	Output: 1


Example 2:
	Input: list  = 1->2->3->null, n = 3
	Output: 1

*/

/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param head: The first node of linked list.
     * @param n: An integer
     * @return: Nth to last node of a singly linked list. 
     */
    ListNode * nthToLast(ListNode * head, int n) {
        // write your code here
        if(head == nullptr)
            return nullptr;
        vector<ListNode *> v; int len = 0;
        for(auto cur = head; cur != nullptr; cur = cur->next)
        {
            v.push_back(cur);
            ++len;
        }
        return v[len - n];
    }
};