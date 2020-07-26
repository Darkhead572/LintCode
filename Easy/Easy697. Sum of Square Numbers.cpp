/*

requirements

697. Sum of Square Numbers
Given a integer c, your task is to decide whether there're two integers a and b such that a^2 + b^2 = c.

Example
Example 1:

Input : n = 5
Output : true
Explanation : 
1 * 1 + 2 * 2 = 5
Example 2:

Input : n = -5
Output : false
*/

class Solution {
public:
    /**
     * @param num: the given number
     * @return: whether whether there're two integers
     */
    bool checkSumOfSquareNumbers(int num) {
        // write your code here
        if (num < 0) return false;
        unordered_map<int, int> index;
        int tmp = int(sqrt(num));  
        if (tmp * tmp == num) return true;
        for (int i = 0; i <= tmp; ++i)
            index[i * i] = i * i;
        for (int i = tmp; i >= tmp / 2; --i)
        {  
            if(index.find(num - i * i) != index.end())
                return true;  
        }
        return false;  
    }
};