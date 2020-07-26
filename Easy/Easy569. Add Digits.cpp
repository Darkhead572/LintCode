/*

requirements
569. Add Digits
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Example
Example 1:

Input:
num=38
Output:
2
Explanation:
The process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return 2.

Example 2:

Input:
num=9
Output:
9
Explanation:
9<10,return 9.
Challenge
Could you do it without any loop/recursion in O(1) runtime?
*/

class Solution {
public:
    /**
     * @param num: a non-negative integer
     * @return: one digit
     */
    /*
    int addDigits(int num) {
        // write your code here
        while (num / 10)
        {
            int tmp = 0;
            while (num)
            {
                tmp += num % 10;
                num /= 10;
            }
            num = tmp;
        }
        return num;
    }
    */
    //Challenge
    int addDigits(int num) {
        // write your code here
        if (num < 10) return num;
        else if (num % 9 == 0) return 9;
        else return num % 9;
    }
};