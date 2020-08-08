/*

requirements

1153. string sorting
Given some string splited by ,, please sort them in lexicographical order.

Example
Example 1

Input: "bb,aa,lintcode,c"
Output: "aa,bb,c,lintcode"
Explanation: "aa" < "bb" < "c" < "lintcode" in lexicographical order.
Challenge
Can you write sort function by yourself?

Notice
String only contains lower cases.
The number of string is \leq 1\,000≤1000 and total length is \leq 10^5≤10
​5
​​ .
*/

class Solution {
public:
    /**
     * @param s: string
     * @return: sort string in lexicographical order
     */
    string sorting(string &s) {
        // write your code here
        string result;
        vector<string> tmp(split(s));
        sort(tmp.begin(), tmp.end());
        for (auto&& elem: tmp)
            result += elem + ",";
        result.pop_back();
        return result;
    }
    vector<string> split(string &s) {
        vector<string> res;
        size_t i = 0;
        size_t m = s.length();
        string tmp;
        while (i < m)
        {
            tmp.clear();
            if (s[i] != ',')
            {
                while (i < m && s[i] != ',')
                {
                    tmp += s[i];
                    ++i;
                }
                res.push_back(tmp);
            }
            else ++i;
        }
        return res;
    }
};