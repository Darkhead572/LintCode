/*

requirements

644. Strobogrammatic Number
A mirror number is a number that looks the same when rotated 180 degrees (looked at upside down).For example, the numbers "69", "88", and "818" are all mirror numbers.

Write a function to determine if a number is mirror. The number is represented as a string.

Example
Example 1:

Input : "69"
Output : true
Example 2:

Input : "68"
Output : false
*/

class Solution {
public:
    /**
     * @param num: a string
     * @return: true if a number is strobogrammatic or false
     */
    // use stack
    /*
    bool isStrobogrammatic(string& num) {
        // write your code here
        if (num.empty()) return true;
        stack<char> s; size_t m = num.length();
        if ((m % 2) && num[m / 2] != '1' && num[m / 2] != '8' && num[m / 2] != '0') return false;
        for (size_t i = 0; i < m / 2; s.push(num[i]), ++i);
        for (size_t i = m / 2 + m % 2; i < m; ++i, s.pop())
        {
            if (s.top() == '8' && num[i] == '8')
                continue;
            else if (s.top() == '6' && num[i] == '9')
                continue;
            else if (s.top() == '9' && num[i] == '6')
                continue;
            else if (s.top() == '1' && num[i] == '1')
                continue;
            else if (s.top() == '0' && num[i] == '0')
                continue;
            else return false;
        }
        return s.empty();
    }
    */
    // two pointers
    bool isStrobogrammatic(string& num) {
        // write your code here
        if (num.empty()) return true;
        size_t m = num.length();
        if ((m % 2) && num[m / 2] != '1' && num[m / 2] != '8' && num[m / 2] != '0') return false;
        for (size_t i = 0; i < m / 2; ++i)
        {
            if (num[i] == '8' && num[m - i - 1] == '8')
                continue;
            else if (num[i] == '6' && num[m - i - 1] == '9')
                continue;
            else if (num[i] == '9' && num[m - i - 1] == '6')
                continue;
            else if (num[i] == '1' && num[m - i - 1] == '1')
                continue;
            else if (num[i] == '0' && num[m - i - 1] == '0')
                continue;
            else return false;
        }
        return true;
    }
};