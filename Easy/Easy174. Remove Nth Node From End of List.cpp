/*

174. Remove Nth Node From End of List

Given a linked list, remove the nth node from the end of list and return its head

样例
Example 1:
	Input: list = 1->2->3->4->5->null， n = 2
	Output: 1->2->3->5->null


Example 2:
	Input:  list = 5->4->3->2->1->null, n = 2
	Output: 5->4->3->1->null

challenge
Can you do it without getting the length of the linked list?

注意事项
The minimum number of nodes in list is n.

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
     * @param head: The first node of linked list.
     * @param n: An integer
     * @return: The head of linked list.
     */
    /*
    ListNode * removeNthFromEnd(ListNode * head, int n) {
        // write your code here
        int length = 0;
        for(auto cur = head; cur != nullptr; cur = cur->next)
        {
            ++length;
        }
        int cnt = 0;
        for(auto cur = head; cur != nullptr; cur = cur->next)
        {
            if(!(length - n))
            {
                auto tmp = head->next;
                delete head;
                head = tmp;
                break;
            }
            else if(length - n - 1 == cnt)
            {
                auto del = cur->next;
                cur->next = del->next;
                delete del;
            }
            ++cnt;
        }
        return head;
    }
    */
    //challenge
    ListNode * removeNthFromEnd(ListNode * head, int n) {
        // write your code here
        auto slow = head;
        auto fast = head;
        for(int i = 0; i < n; ++i)
        {
            fast = fast->next;
        }
        auto pre = head;
        while(fast != nullptr)
        {
            if(pre != slow)
                pre = slow;
            slow = slow->next;
            fast = fast->next;
        }
        if(slow == head)
        {
            auto tmp = head->next;
            delete head;
            head = tmp;
        }
        else
        {
            pre->next = slow->next;
            delete slow; slow = nullptr;
        }
        
        return head;
    }
};