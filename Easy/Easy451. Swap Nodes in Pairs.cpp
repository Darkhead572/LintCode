/*

requirements

451. Swap Nodes in Pairs
Given a linked list, swap every two adjacent nodes and return its head.

Example
Example 1:

Input: 1->2->3->4->null
Output: 2->1->4->3->null
Example 2:

Input: 5->null
Output: 5->null
Challenge
Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.
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
     * @param head: a ListNode
     * @return: a ListNode
     */
    ListNode * swapPairs(ListNode * head) {
        // write your code here
        auto pre = head; bool tag = false;
        for (auto cur = head; cur->next != nullptr; cur = cur->next, tag = !tag)
        {
            if (!tag && pre != head)
            {
                auto tmp = cur->next;
                pre->next = tmp;
                cur->next = tmp->next;
                tmp->next = cur;
                cur = tmp;
            }
            else if (!tag && pre == head)
            {
                auto tmp = cur->next;
                cur->next = tmp->next;
                tmp->next = cur;
                cur = tmp;
                head = tmp;
            }
            pre = cur;
        }
        return head;
    }
};