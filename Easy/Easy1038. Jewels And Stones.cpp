/*

requirements

1038. Jewels And Stones
You're given strings J representing the types of stones that are jewels, and S representing the stones you have. Each character in S is a type of stone you have. You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example
Example 1:

Input: J = "aA", S = "aAAbbbb"
Output: 3
Example 2:

Input: J = "z", S = "ZZ"
Output: 0
Notice
S and J will consist of letters and have length at most 50.
The characters in J are distinct.
*/

class Solution {
public:
    /**
     * @param J: the types of stones that are jewels
     * @param S: representing the stones you have
     * @return: how many of the stones you have are also jewels
     */
    int numJewelsInStones(string &J, string &S) {
        // Write your code here
        int res = 0;
        unordered_map<char, bool> hashMap;
        for (size_t i = 0; i < J.length(); ++i)
        {
            if (!hashMap.count(J[i]))
                hashMap[J[i]] = true;
            else continue;
        }
        for (size_t i = 0; i < S.length(); ++i)
        {
            if (hashMap.count(S[i]))
                ++res;
        }
        return res;
    }
};