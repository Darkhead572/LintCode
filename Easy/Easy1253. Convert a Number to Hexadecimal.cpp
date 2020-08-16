/*

requirements

1253. Convert a Number to Hexadecimal
Given an integer, write an algorithm to convert it to hexadecimal. For negative integer, two’s complement method is used.

Example
Example 1:

Input：26
Output："1a"
Example 2:

Input：-1
Output："ffffffff"
Notice
1.All letters in hexadecimal (a-f) must be in lowercase.
2.The hexadecimal string must not contain extra leading 0s. If the number is zero, it is represented by a single zero character '0'; otherwise, the first character in the hexadecimal string will not be the zero character.
3.The given number is guaranteed to fit within the range of a 32-bit signed integer.
4.You must not use any method provided by the library which converts/formats the number to hex directly.
*/

class Solution {
public:
    /**
     * @param num: an integer
     * @return: convert the integer to hexadecimal
     */
    string toHex(int num) {
        // Write your code here
        if(num == 0)
            return "0";
        int m = 0;
        string ans;
        while(num && m < 8)
        {
            int bit = num & 15;
            if(bit < 10)
                ans = (char)('0' + bit) + ans;
            else
                ans = (char)('a' + bit - 10) + ans;
            num >>= 4;
            ++m;
        }
        return ans;
    }
};