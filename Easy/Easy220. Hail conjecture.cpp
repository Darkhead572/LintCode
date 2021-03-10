/*
220. Hail conjecture
Mathematicians have put forward a famous conjecture hail conjecture.
For any natural number n, if n is even, replace n with n / 2;
If n is odd, replace n with 3 * n + 1.
According to this rule, the final result must be 1.
How many times will the number change to 1?

Example
Example 1:

Input: 
4
Output: 
2
Explanation: 
First round: 4 / 2 = 2
Second round: 2 / 2 = 1
The answer is 2
Notice
1<=n<=1000
*/

/*
220. 冰雹猜想
数学家们曾提出一个著名的猜想——冰雹猜想。
对于任意一个自然数N，如果N是偶数，就把它变成N / 2；
如果N是奇数，就把它变成 3 * N+1。
按照这个法则运算下去，最终必然得1。
试问，该数通过几轮变换，会变成1呢？

Example
样例 1：

输入： 
4
输出： 
2
解释： 
第一轮：4/2=2
第二轮：2/2=1
答案为2
Notice
1<=n<=1000
*/

class Solution {
public:
    /**
     * @param num: an integer
     * @return: return an integer
     */
    int getAnswer(int num) {
        // write your code here.
        int result = 0;
        while (num != 1)
        {
            if (num & 1)
                num = 3 * num + 1;
            else num /= 2;
            ++result;
        }
        return result;
    }
};