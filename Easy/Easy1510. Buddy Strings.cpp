/*

requirements

1510. Buddy Strings
Given two strings A and B of lowercase letters, return true if and only if we can swap two letters in A so that the result equals B.

Example
Example 1:

Input: A = "ab", B = "ba"
Output: true
Example 2:

Input: A = "ab", B = "ab"
Output: false
Example 3:

Input: A = "aa", B = "aa"
Output: true
Example 4:

Input: A = "aaaaaaabc", B = "aaaaaaacb"
Output: true
Example 5:

Input: A = "", B = "aa"
Output: false
Notice
1.0 <= A.length <= 20000
2.0 <= A.length <= 20000
3.A and B consist only of lowercase letters.
*/

class Solution {
public:
    /**
     * @param A: string A
     * @param B: string B
     * @return: bool
     */
    bool buddyStrings(string &A, string &B) {
        // Write your code here
        int cnt = 0; bool tag = false;
        unordered_map<char, int> hashMap;
        if (A.size() != B.size())
            return false;
        for (size_t i = 0; i < A.size(); ++i)
        {
            if (A[i] != B[i])
                ++cnt;
            if (hashMap.count(A[i]))
                ++hashMap[A[i]], tag = true;
            else hashMap[A[i]] = 1;
            if (hashMap.count(B[i]))
                --hashMap[B[i]];
            else hashMap[B[i]] = -1;
        }
        for (auto&& elem: hashMap)
        {
            if (elem.second)
                return false;
        }
        return cnt == 0 && tag || cnt == 2;
    }
};

// the other Solution
/*
class Solution {
public:
    bool buddyStrings(string &A, string &B) {
        if (A.length() != B.length()) {
            return false;
        }
        if (A == B && set<char>(A.begin(), A.end()).size() < A.size()) {
            return true;
        }
        vector<int> dif;
        for (int i = 0; i < A.length(); ++i) {
            if (A[i] != B[i]) {
                dif.push_back(i);
            }
        }
        return dif.size() == 2 && A[dif[0]] == B[dif[1]] && A[dif[1]] == B[dif[0]];
    }
};
*/