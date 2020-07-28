/*

requirements

987. Binary Number with Alternating Bits
Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

Example
Example 1:

Input: 5
Output: True
Explanation:
The binary representation of 5 is: 101
Example 2:

Input: 7
Output: False
Explanation:
The binary representation of 7 is: 111.
Example 3:

Input: 11
Output: False
Explanation:
The binary representation of 11 is: 1011.
Example 4:

Input: 10
Output: True
Explanation:
The binary representation of 10 is: 1010.
*/

/*
class Solution {
public:
    /**
     * @param n: a postive Integer
     * @return: if two adjacent bits will always have different values
     */
/*
    bool hasAlternatingBits(int n) {
        // Write your code here
        string number;
        while (n)
        {
            number += char(n % 2 + 48);
            n /= 2;
        }
        for (size_t i = 1; i < number.length(); ++i)
            if (number[i] == number[i - 1]) return false;
        return true;
    }
};
*/

// better solution
class Solution {
public:
    /**
     * @param n: a postive Integer
     * @return: if two adjacent bits will always have different values
     */
    /*
    一个具有交替位的二进制数，我们把它右移一位后与原二进制数异或，得到的新二进制数每一位上都是1。
	把问题转化为了如何判断一个二进制数是否每一位全为1,这里我们采用的方法是将该二进制数+1后与原数进行与操作。
    */
    bool hasAlternatingBits(int n) {
      	n = n ^ (n >> 1);
        return (n & n+1) == 0;
    }
};