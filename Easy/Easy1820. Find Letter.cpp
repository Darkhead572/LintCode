/*

requirements

1820. Find Letter
Given a string str, return the letter with the largest alphabetical order in the string and both such uppercase and lowercase letters must appear in the string.
If no such letter exists, return '~'.

Example
Example 1:

Input:"aAbBcD"
Output:'B'
Explanation：Because C and D's lowercase and uppercase do not appear at the same time, 
both A and B are appearing, but B is larger than A, so B is returned.
Example 2:

Input:"looGVSSPbR"
Output:'~'
Notice
please return uppercase
|str|<=1000
*/

class Solution {
public:
    /**
     * @param str: the str
     * @return: the letter
     */
    char findLetter(string &str) {
        // Write your code here.
        map<char, int> myset;
        // status: if value is 0, means need a lower case alphabet
        // if value is 1, means need a upper case alphabet
        // if value is 2, do nothing
        for (int i = 0; i < str.length(); ++i)
        {
            char now = str[i];
            if (islower(str[i])) now -= 32;
            if (myset.count(now))
            {
                int status = myset[now];
                switch (status)
                {
                    case 0:
                        if (islower(str[i]))
                            myset[now] = 2;
                        break;
                    case 1:
                        if (isupper(str[i]))
                            myset[now] = 2;
                        break;
                    default: break;
                }
            }
            else if (islower(str[i])) myset[now] = 1;
            else myset[now] = 0;
        }
        char res = '~';
        for (auto it = myset.rbegin(); it != myset.rend(); ++it)
        {
            if (it->second == 2)
            {
                res = it->first;
                break;
            }
        }
        return res;
    }
};