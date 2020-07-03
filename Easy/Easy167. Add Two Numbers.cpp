/*

requirements
167. Add Two Numbers
中文English
You have two numbers represented by a linked list, where each node contains a single digit. The digits are stored in reverse order, such that the 1's digit is at the head of the list. Write a function that adds the two numbers and returns the sum as a linked list.

样例
Example 1:

Input: 7->1->6->null, 5->9->2->null
Output: 2->1->9->null	
Explanation: 617 + 295 = 912, 912 to list:  2->1->9->null
Example 2:

Input:  3->1->5->null, 5->9->2->null
Output: 8->0->8->null	
Explanation: 513 + 295 = 808, 808 to list: 8->0->8->null
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
     * @param l1: the first list
     * @param l2: the second list
     * @return: the sum list of l1 and l2 
     */
    ListNode * addLists(ListNode * l1, ListNode * l2) {
        // write your code here
        ListNode *head = new ListNode(0);
        ListNode *ptr = head;
        int carry = 0;
        while (true) 
        {
            if (l1 != nullptr) 
            {
                carry += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) 
            {
                carry += l2->val;
                l2 = l2->next;
            }
            ptr->val = carry % 10;
            carry /= 10;
            if (l1 != NULL || l2 != NULL || carry != 0)
            {
                ptr = (ptr->next = new ListNode(0));
            } 
            else break;
        }
        return head;
    }
};