/*

requirements

452. Remove Linked List Elements
Remove all elements from a linked list of integers that have value val.

Example
Example 1:

Input: head = 1->2->3->3->4->5->3->null, val = 3
Output: 1->2->4->5->null
Example 2:

Input: head = 1->1->null, val = 1
Output: null
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
     * @param val: An integer
     * @return: a ListNode
     */
    ListNode * removeElements(ListNode * head, int val) {
        // write your code here
        auto first = new ListNode(0);
        first->next = head;
        auto cur = head; auto pre = first;
        while (cur != nullptr)
        {
            if (cur->val == val)
            {
                pre->next = cur->next;
                delete cur;
                cur = pre->next;
            }
            else
            {
                pre = cur;
                cur = cur->next; 
            }
        }
        head = first->next;
        delete first;
        return head;
    }
};