/*

requirements
165. Merge Two Sorted Lists
中文English
Merge two sorted (ascending) linked lists and return it as a new sorted list. The new sorted list should be made by splicing together the nodes of the two lists and sorted in ascending order.

样例
Example 1:
	Input: list1 = null, list2 = 0->3->3->null
	Output: 0->3->3->null


Example 2:
	Input:  list1 =  1->3->8->11->15->null, list2 = 2->null
	Output: 1->2->3->8->11->15->null

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
     * @param l1: ListNode l1 is the head of the linked list
     * @param l2: ListNode l2 is the head of the linked list
     * @return: ListNode head of linked list
     */
    /*
    ListNode * mergeTwoLists(ListNode * l1, ListNode * l2) {
        // write your code here
        if(l1 == nullptr && l2 == nullptr)
            return nullptr;
        ListNode * res = new ListNode;
        ListNode * tmp = res;
        auto cur1 = l1, cur2 = l2;
        bool tag = false;
        while(cur1 != nullptr && cur2 != nullptr)
        {
            if(cur1->val <= cur2->val)
            {
                tmp->next = new ListNode(cur1->val);
                tmp = tmp->next;
                cur1 = cur1->next;
            }
            else
            {
                tmp->next = new ListNode(cur2->val);
                tmp = tmp->next;
                cur2 = cur2->next;
            }
        }
        while(cur1 != nullptr)
        {
            ListNode* newNode = new ListNode(cur1->val);
            tmp->next = newNode;
            tmp = newNode;
            cur1 = cur1->next;
        }
        while(cur2 != nullptr)
        {
            ListNode* newNode = new ListNode(cur2->val);
            tmp->next = newNode;
            tmp = newNode;
            cur2 = cur2->next;
        }
        auto head = res->next;
        delete res;
        return head;
    }
    */
    //another algorithm
    ListNode * mergeTwoLists(ListNode * l1, ListNode * l2) {
        // write your code here
        if(l1 == nullptr && l2 == nullptr)
            return nullptr;
        ListNode * res = new ListNode;
        ListNode * tmp = res;
        auto cur1 = l1, cur2 = l2;
        vector<int> v;
        while(cur1 != nullptr)
        {
            v.push_back(cur1->val);
            cur1 = cur1->next;
        }
        while(cur2 != nullptr)
        {
            v.push_back(cur2->val);
            cur2 = cur2->next;
        }
        sort(v.begin(), v.end(), [&](const int a, const int b){ return a < b; });
        for(int i = 0; i < v.size(); ++i)
        {
            tmp->next = new ListNode(v[i]);
            tmp = tmp->next;
        }
        auto head = res->next;
        delete res;
        return head;
    }
};