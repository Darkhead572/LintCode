/*
288. Container Design
Your task is to design a data structure to store a series of numbers and include the following two functions:

add(element)
add element into this data structure.
getSum()
calculate the sum of numbers in this data structure.
Example
Example 1：

Input:  
add(1)
add(2)
getSum()
add(4)
getSum()

Output: 
[3, 7]
Explanation: 
After add 1 and 2, the sum of numbers is 1 + 2 =  3.
After add 4, the sum of numbers is 1 + 2 + 4 = 7.
Challenge
Can you calculate the sum with using O(1) time complexity?
*/

/*
288. 容器设计
你的任务是设计一个数据结构来存放一系列的数字，并且支持以下两种操作：

add(element)
在数据结构中增加一个整数 element。
getSum()
对数据结构中的整数求和。
Example
样例 1：

输入：
add(1)
add(2)
getSum()
add(4)
getSum()

输出：
[3, 7]
解释：
在加入了两个数字 1 和 2 之后，求得的和是 1 + 2 = 3.
又加入了数字 4 之后，求得的和变成 1 + 2 + 4 = 7.
Challenge
你可以使用O(1)的时间复杂度求和吗？
*/

class MyContainer {
private:
    unordered_set<int> data;
    int sum;
public:
    MyContainer() {
        // initialize your data structure here
        sum = 0;
    }
    /**
     * @param element: Add element into this container.
     * @return: nothing
     */
    void add(int element) {
        // write your code here.
        data.insert(element);
        sum += element;
    }

    /**
     * @return: Sum of integers.
     */
    int getSum() {
        // write your code here.
        return sum;
    }
};