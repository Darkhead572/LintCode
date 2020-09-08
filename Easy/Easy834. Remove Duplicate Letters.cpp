/*

requirements

834. Remove Duplicate Letters

Given a string s which contains only lowercase letters, remove duplicate letters so that every letter appear once and only once. You must make sure your result is the smallest in lexicographical order among all possible results.

Example
Example1

Input: s = "bcabc"
Output: "abc"
Example2

Input: s = "cbacdcbc"
Output: "acdb"
*/

class Solution {
public:
    /**
     * @param s: a string
     * @return: return a string
     */
    string removeDuplicateLetters(string &s) {
        // write your code here
        stack<int> st;
        vector<bool> vis(26, false);
        vector<int> num(26, 0);
        for (int i = 0; i < s.size(); ++i)
            ++num[s[i] - 'a'];
        for (int i = 0; i < s.size(); ++i)
        {
            int id = s[i] - 'a';
            --num[id];
            if (vis[id]) continue;
            while(
                !st.empty() &&
                st.top() > id &&
                num[st.top()]
                )
            {
                vis[st.top()] = 0;
                st.pop();
            }
            st.push(id);
            vis[id] = true;
        }
        string ans;
        while(!st.empty())
        {
            ans += char('a' + st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};