/*

requirements

1425. Backspace String Compare
Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

Example
Example 1:

Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".
Example 2:

Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".
Example 3:

Input: S = "a##c", T = "#a#c"
Output: true
Explanation: Both S and T become "c".
Example 4:

Input: S = "a#c", T = "b"
Output: false
Explanation: S becomes "c" while T becomes "b".
Challenge
Can you solve it in O(N) time and O(1) space?

Notice
1 <= S.length <= 200
1 <= T.length <= 200
S and T only contain lowercase letters and '#' characters.
*/

class Solution {
public:
    /**
     * @param S: string S
     * @param T: string T
     * @return: Backspace String Compare
     */
    bool backspaceCompare(string &S, string &T) {
        // Write your code here
        stack<char> s; int cnt = 0;
        for (int i = 0; i < S.size(); ++i)
        {
            if (s.empty() && S[i] == '#')
                continue;
            else if (S[i] == '#') s.pop();
            else s.push(S[i]);
        }
        for (int i = T.size() - 1; i >= 0; --i)
        {
            if (T[i] == '#') ++cnt;
            else if (cnt) --cnt;
            else if (T[i] == s.top()) s.pop();
            else s.push(T[i]);
        }
        return s.empty();
    }
};