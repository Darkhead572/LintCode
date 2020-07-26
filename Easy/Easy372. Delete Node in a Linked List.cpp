/*

372. Delete Node in a Linked List
Implement an algorithm to delete a node in the middle of a singly linked list, given only access to that node.

样例
Example 1:

Input:
1->2->3->4->null
3
Output:
1->2->4->null
Example 2:

Input:
1->3->5->null
3
Output:
1->5->null
*/

/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param node: the node in the list should be deleted
     * @return: nothing
     */
    void deleteNode(ListNode * node) {
        // write your code here
        if (node == nullptr)
            return;
        if (node->next == nullptr)
        {
            delete node;
            return;
        }
        swap(node->val, node->next->val);
        auto tmp = node->next;
        node->next = tmp->next;
        delete tmp;
        return;
    }
};