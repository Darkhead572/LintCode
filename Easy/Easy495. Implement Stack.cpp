/*

requirements

495. Implement Stack
Implement a stack. You can use any data structure inside a stack except stack itself to implement it.

Example
Example 1:

Input:
push(1)
pop()
push(2)
top()  // return 2
pop()
isEmpty() // return true
push(3)
isEmpty() // return false
Example 2:

Input:
isEmpty()
*/

class Stack {
public:
    /*
     * @param x: An integer
     * @return: nothing
     */
    void push(int x) {
        // write your code here
        data.push_back(x);
    }

    /*
     * @return: nothing
     */
    void pop() {
        // write your code here
        data.pop_back();
    }

    /*
     * @return: An integer
     */
    int top() {
        // write your code here
        return data.back();
    }

    /*
     * @return: True if the stack is empty
     */
    bool isEmpty() {
        // write your code here
        return data.empty();
    }
private:
    deque<int> data;
};