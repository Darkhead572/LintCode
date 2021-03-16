/*
1133. Group Buy
There are xx persons who plan to buy goods of kind A, yy persons who plan to buy goods of kind B, and zz persons who plan to buy goods of kind C. And everyone of them plans to buy 11 item.
Now there are group buy rules:

In each group buy, people can buy 33 items.
In each group buy, it has to contain 11 item of kind A, and 11 item of kind B.
Please calculate how much times they can group buy at most.

Example
Sample Input:
x = 2
y = 3
z = 1
Sample Output:
2
Clarification
In the sample, the two times group buy is shown below：
[A, B, B][A,B,B]
[A, B, C][A,B,C]

Notice
0 \le x, y, z \le 10^60≤x,y,z≤10
​6
*/

/*
1133. 团购
中文English
有 xx 个人打算买 A 类商品，有 yy 个人打算买 B 类商品，zz 个人打算买 C 类商品，每个人都只打算买 11 件商品。
现在有一个团购规则，规则如下：

每次团购规定买 33 件商品。
每次团购至少包括 11 件 A 类商品和 11 件 B 类商品。
请求出这些人最多团购多少次。

Example
样例输入:
x = 2
y = 3
z = 1
样例输出:
2
Clarification
样例中，两次团购分别是：
[A, B, B][A,B,B]
[A, B, C][A,B,C]

Notice
0 \le x, y, z \le 10^60≤x,y,z≤10
​6
*/

class Solution {
public:
    /**
     * @param x: the number of people who plan to buy goods A.
     * @param y: the number of people who plan to buy goods B.
     * @param z: the number of people who plan to buy goods C.
     * @return: return the maximum times they can group buy.
     */
    int groupBuyTimes(int x, int y, int z) {
        // write your code here
        return min(x, min(y, (x + y + z) / 3));
    }
};