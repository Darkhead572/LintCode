/*

requirements
157. Unique Characters
中文English
Implement an algorithm to determine if a string has all unique characters.

样例
Example 1:

Input: "abc_____"
Output: false
Example 2:

Input:  "abc"
Output: true	
挑战
What if you can not use additional data structures?
*/

class Solution {
public:
    /*
     * @param str: A string
     * @return: a boolean
     */
    //almost worst solution
    /*
    bool isUnique(string &str) {
        // write your code here
        for(int i = 0; i < str.length(); ++i)
        {
            for(int j = 0; j < i; ++j)
            {
                if(str[i] == str[j])
                    return false;
                else continue;
            }
        }
        return true;
    }
    */
    //better solution
    //shortcoming: array map is related to number of characters
    bool isUnique(string &str) {
        // write your code here
        bool map[256];
        memset(map, false, sizeof(map));
        for(int i = 0; i < str.length(); ++i)
        {
            if(!map[str[i]])
                map[str[i]] = true;
            else return false;
        }
        return true;
    }
};