/*

requirements

647. Find All Anagrams in a String
Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.

Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 40,000.

The order of output does not matter.

Example
Example 1:

Input : s =  "cbaebabacd", p = "abc"
Output : [0, 6]
Explanation : 
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".
*/

class Solution {
public:
    /**
     * @param s: a string
     * @param p: a string
     * @return: a list of index
     */
    vector<int> findAnagrams(string &s, string &p) {
        // write your code here
        vector<int> res;
        int m = s.size();
        int n = p.size();
        for (int i = 0; i < m - n + 1; ++i)
            if (isAnagram(s.substr(i, n), p))
                res.push_back(i);
        return res;
    }
private:
    bool isAnagram(const string& src, const string& p)
    {
        int alphabet[26] = { 0 };
        if (src.length() != p.length())
            return false;
        for (size_t i = 0; i < src.length(); ++i)
            ++alphabet[src[i] - 97], --alphabet[p[i] - 97];
        for (size_t i = 0; i < 26; ++i)
            if (alphabet[i])
                return false;
        return true;
    }
};