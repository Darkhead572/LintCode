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
     * @param head: the first node of linked list.
     * @return: An integer
     */
    int countNodes(ListNode * head) {
        // write your code here
        if(head == nullptr) return 0;
        int count = 0;
        while(head != nullptr)
        {
            head = head -> next;
            count++;
        }
        return count;
    }
};
