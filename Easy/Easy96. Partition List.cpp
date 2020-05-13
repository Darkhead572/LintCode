/*
96. Partition List
中文English
Given a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

You should preserve the original relative order of the nodes in each of the two partitions.

Example
Example 1:

Input:  list = null, x = 0
Output: null	
Explanation: The empty list Satisfy the conditions by itself.
Example 2:

Input:  list = 1->4->3->2->5->2->null, x = 3
Output: 1->2->2->4->3->5->null	
Explanation:  keep the original relative order of the nodes in each of the two partitions.
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
     * @param head: The first node of linked list
     * @param x: An integer
     * @return: A ListNode
     */
    ListNode * partition(ListNode * head, int x) {
        // write your code here
        if(head == nullptr) return head;
        queue<int> q1;
        queue<int> q2;
        ListNode * current = nullptr;
        for(current = head; current != nullptr; current = current->next)
        {
            if(current->val < x) q1.push(current->val);
            else q2.push(current->val);
        }
        int m = q1.size();
        int n = q2.size();
        current = head;
        for(int i = 0; i < m; ++i)
        {
            current->val = q1.front();
            q1.pop();
            current = current->next;
        }
        for(int i = 0; i < n; ++i)
        {
            current->val = q2.front();
            q2.pop();
            current = current->next;
        }
        return head;
    }
};
