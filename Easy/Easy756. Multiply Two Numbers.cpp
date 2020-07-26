/*

requirements

756. Multiply Two Numbers
Given two numbers represented by linked lists, write a function that returns the multiplication of these two linked lists.

Example
Example 1:

Input：9->4->6->null,8->4->null
Output：79464
Explanation：946*84=79464
Example 2:

Input：3->2->1->null,1->2->null
Output：3852
Explanation：321*12=3852
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
     * @return: the product list of l1 and l2
     */
    long long multiplyLists(ListNode * l1, ListNode * l2) {
        // write your code here
        stack<int> s1; stack<int> s2;
        auto cur1 = l1, cur2 = l2;
        while (cur1 != nullptr || cur2 != nullptr)
        {
            if (cur1 != nullptr)
            {
                s1.push(cur1->val);
                cur1 = cur1->next;
            }
            if (cur2 != nullptr)
            {
                s2.push(cur2->val);
                cur2 = cur2->next;
            }
        }
        long index = 1;
        long oprand1 = 0, oprand2 = 0;
        while (!s1.empty() || !s2.empty())
        {
            if (!s1.empty())
            {
                oprand1 += index * s1.top();
                s1.pop();
            }
            if (!s2.empty())
            {
                oprand2 += index * s2.top();
                s2.pop();
            }
            index *= 10;
        }
        return oprand1 * oprand2;
    }
};