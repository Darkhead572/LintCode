/*

requirements

1905. Character deletion
Enter two strings and delete all characters in the second string from the first string

Example
Example 1:

Input:  str=”They are students”，sub=”aeiou”
Output: ”Thy r stdnts”
Notice
String contains spaces
1\leq len(str),len(sub) \leq 10^51≤len(str),len(sub)≤10
​5
​​
*/

class Solution {
public:
    /**
     * @param str: The first string given
     * @param sub: The given second string
     * @return: Returns the deleted string
     */
    string CharacterDeletion(string &str, string &sub) {
        // write your code here
        string res;
        unordered_map<char, bool> hashMap;
        for (size_t i = 0; i < sub.length(); ++i)
            if(!hashMap.count(sub[i]))
                hashMap[sub[i]] = true;
        for (size_t i = 0; i < str.length(); ++i)
            if(!hashMap.count(str[i]))
                res += str[i];
        return res;
    }
};