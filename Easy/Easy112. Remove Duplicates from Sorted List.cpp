/* requirements

112. Remove Duplicates from Sorted List
中文English
Given a sorted linked list, delete all duplicates such that each element appear only once.

Example
Example 1:
	Input:  null
	Output: null


Example 2:
	Input:  1->1->2->null
	Output: 1->2->null
	
Example 3:
	Input:  1->1->2->3->3->null
	Output: 1->2->3->null

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
     * @param head: head is the head of the linked list
     * @return: head of linked list
     */
    ListNode * deleteDuplicates(ListNode * head) {
        // write your code here
        if(head == nullptr) 
            return nullptr;
        auto current = head; 
        while(current != nullptr)
        {
            if(current->next != nullptr && current->val == current->next->val)
            {
                auto tmp = current->next;
                current->next = tmp->next;
                delete tmp;
            }
            else  current = current->next;
        }
        return head;
    }
};