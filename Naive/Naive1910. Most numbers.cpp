/*
1910. Most numbers
Find the number with the most occurrences in the given array.
When the number of occurrences is the same, return the smallest one.

Example
Example 1:

Input: 
[1,1,2,3,3,3,4,5]
Output: 
3
Example 2:

Input: 
[1]
Output: 
1
Notice
The array length does not exceed 100000.
0 <= a[i] <= 2147483647
*/

/*
1910. 数组中出现次数最多的值
在给定的数组中，找到出现次数最多的数字。
出现次数相同时，返回数值最小的数字。

Example
样例 1：

输入： 
[1,1,2,3,3,3,4,5]
输出： 
3
样例 2：

输入： 
[1]
输出： 
1
Notice
数组长度不超过100000。
0 <= a[i] <= 2147483647
*/

class Solution {
public:
    /**
     * @param array: An array.
     * @return: An integer.
     */
    int findNumber(vector<int> &array) {
        // Write your code here.
        unordered_map<int, int> table;
        for (int i = 0; i < array.size(); ++i)
        {
            int tmp = array[i];
            if (table.count(tmp))
                ++table[tmp];
            else table[tmp] = 0;
        }
        int min_number = -1;
        int maximum = -1;
        for (auto elem: table)
        {
            if (elem.second > maximum)
            {
                maximum = elem.second;
                min_number = elem.first;
            }
            else if (elem.second == maximum && elem.first < min_number)
                min_number = elem.first;
            else continue;
        }
        return min_number;
    }
};