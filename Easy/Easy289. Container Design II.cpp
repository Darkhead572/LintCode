/*
289. Container Design II
Your task is to design a data structure to store a series of numbers including the following three functions:

add(element)
add an integer element into the data structure. If the element has already existed in the data structure, this operation is invalid.
remove(element)
remove an integer element from the data structure. If the element does not exist in the data structure, this operation is invalid.
getSum()
calculate the sum of integers in this data structure.
Example
Example 1：

add(2)
getSum()
add(4)
getSum()
remove(5)
getSum()
remove(2)
getSum()
Output: 
[2,6,6,4]
Explanation: 
Through the function add(2), the sum is 2.
Through the function add(4), the sum of integers is now 2 + 4 = 6.
The integer 5 does not exist in the data structure, thus this operation is invalid. The sum of integers is still 2 + 4 = 6
Through the function remove(2), the sum now is 4 after deleting 2.
Challenge
Can you calculate the sum with using O(1) time complexity?
*/

/*
289. 容器设计 II
你的任务是设计一个数据结构来存放一系列的数字，并且支持以下三种操作：

add(element)
在数据结构中增加一个整数 element。若 element 已经存在于数据结构中，本次操作无效。
remove(element)
在数据结构中删除一个整数 element。若 element 不存在于数据结构中，本次操作无效。
getSum()
对数据结构中的整数求和。
Example
样例 1：

输入：
add(2)
getSum()
add(4)
getSum()
remove(5)
getSum()
remove(2)
getSum()
输出：
[2,6,6,4]
解释：
在加入了数字 2 之后，求得的和是 2。
又加入了数字 4 之后，求得的和变成 2 + 4 = 6。
因为集合中不存在数字 5，所以删除 5 之后求得的和还是 2 + 4 = 6。
删除数字 2 之后，求得的和变成 4。
Challenge
你可以使用O(1)的时间复杂度求和吗？
*/

class MyContainerII {
private:
    unordered_set<int> data;
    int sum;
public:
    MyContainerII() {
        // initialize your data structure here
        sum = 0;
    }
    
    /**
     * @param element: Add element into this container.
     * @return: nothing
     */
    void add(int element) {
        // write your code here
        if (!data.count(element))
        {
            data.insert(element);
            sum += element;
        }
    }
    
    /**
     * @param element: Remove element into this container.
     * @return: nothing
     */
    void remove(int element) {
        // write your code here
        if (data.count(element))
        {
            data.erase(element);
            sum -= element;
        }
    }

    /**
     * @return: Sum of integers.
     */
    int getSum() {
        // write your code here
        return sum;
    }
};