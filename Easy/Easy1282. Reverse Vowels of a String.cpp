/*

requirements

1282. Reverse Vowels of a String
Write a function that takes a string as input and reverse only the vowels of a string.

Example
Example 1:

Input : s = "hello"
Output :  "holle"
Example 2:

Input : s = "lintcode"
Output : "lentcodi".
Notice
The vowels does not include the letter "y".
*/

class Solution {
public:
    /**
     * @param s: a string
     * @return: reverse only the vowels of a string
     */
    string reverseVowels(string &s) {
        // write your code here
        set<char> mySet = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
        vector<int> v;
        for (int i = 0; i < s.length(); ++i)
            if (mySet.count(s[i]))
                v.push_back(i);
        for (int i = 0; i < v.size() / 2; ++i)
            swap(s[v[i]], s[v[v.size() - i - 1]]);
        return s;
    }
};