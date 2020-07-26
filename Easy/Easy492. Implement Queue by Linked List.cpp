/*

requirements

492. Implement Queue by Linked List
Implement a Queue by linked list. Support the following basic methods:

enqueue(item). Put a new item in the queue.
dequeue(). Move the first item out of the queue, return it.
Example
Example 1:

Input:
enqueue(1)
enqueue(2)
enqueue(3)
dequeue() // return 1
enqueue(4)
dequeue() // return 2
Example 2:

Input:
enqueue(10)
dequeue()// return 10

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

class MyQueue {
public:
    // constructor
    MyQueue(): first(new ListNode(0)) { last = first; }
    /*
     * @param item: An integer
     * @return: nothing
     */
    void enqueue(int item) {
        // write your code here
        auto newNode = new ListNode(item);
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }

    /*
     * @return: An integer
     */
    int dequeue() {
        // write your code here
        if (first->next == nullptr)
        {
            return INT_MIN;
        }
        else
        {
            if (first->next == last)
                last = first;
            int res = first->next->val;
            auto del = first->next;
            first->next = del->next;
            delete del;
            return res;
        }
    }
    ~MyQueue()
    {
        vector<ListNode*> v;
        for (auto cur = first; cur != nullptr; cur = cur->next)
        {
            v.push_back(cur);
        }
        for (auto && elem: v)
        {
            delete elem;
        }
    }
private:
    ListNode * first;
    ListNode * last;
};