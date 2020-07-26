/*

reuqirements

294. Linked List Simplification
You are given a charactor linked list, please simplify it.
To simplify the linked list, you should keep the head node and the tail node, replace the middle part with a number.
The number should also be represent by charactors.

Example
Input1：
104->101->108->108->111->null
Output1：
104->51->111->null
Input2：
97->98->...->122->null
Output2：
97->50->52->122->null
Clarification
The regional linked list is 'h'->'e'->'l'->'l'->'o'->null.
It become 'h'->'3'->'o'->null.
In the second case:
The regional linked list is 'a'->'b'->...->'z'->null.
It become 'a'->'2'->'4'->'z'->null.

Notice
The input charactor linked list will be represent by a integer linked list, which every node's value is the ASCII for the charactor.
The input charactor linked list is of length nn, which 3 \le n \le 10^43≤n≤10
​4
​​ .
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
     * @param head: the linked list to be simplify.
     * @return: return the linked list after simplifiction.
     */
    ListNode * simplify(ListNode * head) {
        // write your code here
        // 1.首先判断该链表头部和尾部是不是为nullptr，如果是的话则直接返回原链表即可
        if (head->next == nullptr || head == nullptr)
            return head;
        // 2.再创建带头结点的链表方便接下来的连接操作
        ListNode * first = new ListNode('\0');
        // 3.其次将原链表head的数据域拷贝至新链表的首元结点中
        ListNode * tmp = new ListNode(head->val);
        first->next = tmp;
        // 4.循环结束的条件是cur遍历指针到达尾结点，同时记录原链表除去头部和尾部的节点数量
        auto cur = head->next; int cnt = 0;
        for (; cur->next != nullptr; cur = cur->next)
        {
            ++cnt;
        }
        // 5.利用栈存放cnt的各个位
        stack<char> s;
        while (cnt)
        {
            s.push(cnt % 10 + 48);
            cnt /= 10;
        }
        // 6.依次取栈顶元素连接到新链表中
        for(; !s.empty(); s.pop())
        {
            ListNode * newNode = new ListNode(s.top());
            tmp->next = newNode;
            tmp = newNode;
        }
        // 7.为新链表添加尾部
        auto tail = new ListNode(cur->val);
        tmp->next = tail;
        // 8.最后移除新链表的头结点并返回res结果指针
        auto res = first->next;
        delete first; return res;
    }
};