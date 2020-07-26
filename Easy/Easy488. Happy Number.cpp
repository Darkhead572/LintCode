/*

requirements

488. Happy Number
Write an algorithm to determine if a number is happy.

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Example
Example 1:

Input:19
Output:true
Explanation:

19 is a happy number

    1^2 + 9^2 = 82
    8^2 + 2^2 = 68
    6^2 + 8^2 = 100
    1^2 + 0^2 + 0^2 = 1

Example 2:

Input:5
Output:false
Explanation:

5 is not a happy number

25->29->85->89->145->42->20->4->16->37->58->89
89 appears again.
*/

class Solution {
public:
    /**
     * @param n: An integer
     * @return: true if this is a happy number or false
     */
    bool isHappy(int n) {
        // write your code here
        unordered_map<int, bool> index;
        index[n] = 1;
        while (n != 1)
        {
            stack<short> s;
            // update new n
            while (n)
            {
                s.push(n % 10);
                n /= 10;
            }
            while (!s.empty())
            {
                n += s.top() * s.top();
                s.pop();
            }
            if (index.find(n) == index.end())
            {
                index[n] = true;
            }
            else return false;
        }
        return true;
    }
};