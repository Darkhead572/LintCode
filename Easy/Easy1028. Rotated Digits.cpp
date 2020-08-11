/*

requirements

1028. Rotated Digits
X is a good number if after rotating each digit individually by 180 degrees, we get a valid number that is different from X. Each digit must be rotated - we cannot choose to leave it alone.

A number is valid if each digit remains a digit after rotation. 0, 1, and 8 rotate to themselves; 2 and 5 rotate to each other; 6 and 9 rotate to each other, and the rest of the numbers do not rotate to any other number and become invalid.

Now given a positive number N, how many numbers X from 1 to N are good?

Example
Example 1:

Input: 10
Output: 4
Explanation: 
There are four good numbers in the range [1, 10] : 2, 5, 6, 9.
Note that 1 and 10 are not good numbers, since they remain unchanged after rotating.
Example 2:

Input: 5
Output: 2
Explanation: 
There are two good numbers in the range [1, 5] : 2, 5.
Notice
N will be in range [1, 10000].

*/

class Solution {
public:
    /**
     * @param N: a positive number
     * @return: how many numbers X from 1 to N are good
     */
    int rotatedDigits(int N) {
        int res = 0;
        for (int i = 1; i <= N; ++i)
        {
            if (check(i))
            ++res;
        }
        return res;
    }
    bool check(int k)
    {
        string str = to_string(k);
        bool flag = false;
        for (char c : str)
        {
            if (c == '3' || c == '4' || c == '7')
                return false;
            if (c == '2' || c == '5' || c == '6' || c == '9')
                flag = true;
        }
        return flag;
    }
    // better Solution--Dynamic Planning
    /*
    int rotatedDigits(int N) {
        int res = 0;
        vector<int> dp(N + 1);   
        for (int i = 0; i <= N; ++i) {
            if (i < 10) {
                if (i == 0 || i == 1 || i == 8) dp[i] = 1;
                else if (i == 2 || i == 5 || i == 6 || i == 9) {
                    dp[i] = 2; ++res;
                }
            } else {
                int a = dp[i / 10], b = dp[i % 10];
                if (a == 1 && b == 1) dp[i] = 1;
                else if (a >= 1 && b >= 1) {
                    dp[i] = 2; ++res;
                }
            }
        }
        return res;
    }
    */
};