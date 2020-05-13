/*
35. Reverse Linked List
中文English
Reverse a linked list.

Example
Example 1:

Input: 1->2->3->null
Output: 3->2->1->null
Example 2:

Input: 1->2->3->4->null
Output: 4->3->2->1->null
Challenge
Reverse it in-place and in one-pass
*/

//challenge

/**
 * Definition of singly-linked-list:
 *
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
     * @param head: n
     * @return: The new head of reversed linked list.
     */
    ListNode * reverse(ListNode * head) {
        // write your code here
        stack<int> s;
        if(head == nullptr) return head;
        for(ListNode* current = head; current!=NULL; current = current->next)
            s.push(current->val);
        for(ListNode* current = head; current!=NULL; current = current->next)
        {
            current->val = s.top();
            s.pop();
        }
        return head;
    }
};
