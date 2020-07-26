/*

requirements

822. Reverse Order Storage
Give a linked list, and store the values of linked list in reverse order into an array.

Example
Example1

Input: 1 -> 2 -> 3 -> null
Output: [3,2,1]
Example2

Input: 4 -> 2 -> 1 -> null
Output: [1,2,4]
Notice
You can not change the structure of the original linked list.
ListNode have two elements: ListNode.val and ListNode.next
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
     * @param head: the given linked list
     * @return: the array that store the values in reverse order 
     */
    vector<int> reverseStore(ListNode * head) {
        // write your code here
        stack<int> s;
        for (auto cur = head; cur != nullptr; cur = cur->next)
        {
            s.push(cur->val);
        }
        vector<int> res(s.size(), 0); int i = 0;
        while (!s.empty())
        {
            res[i++] = s.top();
            s.pop();
        }
        return res;
    }
};