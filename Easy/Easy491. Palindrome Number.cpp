/*

requirements

491. Palindrome Number
Check a positive number is a palindrome or not.

A palindrome number is that if you reverse the whole number you will get exactly the same number.

Example
Example 1:

Input:11
Output:true

Example 2:

Input:1232
Output:false
Explanation:
1232!=2321
Notice
It's guaranteed the input number is a 32-bit integer, but after reversion, the number may exceed the 32-bit integer.
*/

class Solution {
public:
    /**
     * @param num: a positive number
     * @return: true if it's a palindrome or false
     */
    bool isPalindrome(int num) {
        // write your code here
        long src = num;
        stack<short> s;
        while (num)
        {
            s.push(num % 10);
            num /= 10;
        }
        long res = 0, index = 1;
        while (!s.empty())
        {
            res += index * s.top();
            index *= 10;
            s.pop();
        }
        return res == src;
    }
};