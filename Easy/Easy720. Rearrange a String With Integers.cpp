/*

requirements

720. Rearrange a String With Integers
Given a string containing uppercase alphabets and integer digits (from 0 to 9), write a function to return the alphabets in the order followed by the sum of digits.

Example
Example 1:

Input : str = "AC2BEW3"
Output : "ABCEW5"
Explanation : 
Alphabets in the lexicographic order, followed by the sum of integers(2 and 3).
*/

class Solution {
public:
    /**
     * @param str: a string containing uppercase alphabets and integer digits
     * @return: the alphabets in the order followed by the sum of digits
     */
    string rearrange(string& str) {
        // Write your code here
        int sum = 0; bool tag = false;
        int alphabets[26] = { 0 };
        for (unsigned i = 0; i < str.length(); ++i)
        {
            if (isalpha(str[i]))
                ++alphabets[str[i] - 65];
            else tag = true, sum += str[i] - 48;
        }
        str.clear();
        for (int i = 0; i < 26; ++i)
        {
            if (alphabets[i])
                str.append(alphabets[i], char(i + 65));
        }
        if (tag) str += to_string(sum);
        return str;
    }
};