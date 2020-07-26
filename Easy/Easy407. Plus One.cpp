/*

requirements

407. Plus One
Given a non-negative number represented as an array of digits, plus one to the number.

The digits are stored such that the most significant digit is at the head of the list.

Example
Example 1:

Input: [1,2,3]
Output: [1,2,4]
Example 2:

Input: [9,9,9]
Output: [1,0,0,0]

*/

class Solution {
public:
    /**
     * @param digits: a number represented as an array of digits
     * @return: the result
     */
    vector<int> plusOne(vector<int> &digits) {
        // write your code here
        vector<int> res; bool c = false; int sum = 0;
        for (int i = digits.size() - 1; i >= 0; --i)
        {
            if (i == digits.size() - 1)
                sum = digits[i] + 1 + c;
            else
                sum = digits[i] + c;
            c = sum / 10;
            res.push_back(sum % 10);
            sum = 0;
        }
        if (c) res.push_back(1);
        reverse(res.begin(), res.end());
        return res;
    }
};