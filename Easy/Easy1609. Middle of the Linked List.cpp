/*

requirements

1609. Middle of the Linked List
Given a non-empty, singly linked list with head node head, return a middle node of linked list.

If there are two middle nodes, return the second middle node.

Example
Example 1:

Input: 1->2->3->4->5->null
Output: 3->4->5->null
Example 2:

Input: 1->2->3->4->5->6->null
Output: 4->5->6->null
Notice
The number of nodes in the given list will be between 1 and 100.
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
     * @param head: the head node
     * @return: the middle node
     */
    ListNode * middleNode(ListNode * head) {
        // write your code here.
        // fast and slow pointer
        auto slow = head, fast = head;
        if (fast == nullptr)
            return nullptr;
        while (fast->next != nullptr && fast->next->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        if (fast->next != nullptr)
            return slow->next;
        else return slow;
    }
};