/*
Description
中文
English
For a given source string and a target string, you should output the first index(from 0) of target string in source string.

If target does not exist in source, just return -1.

Clarification
Do I need to implement KMP Algorithm in a real interview?

Not necessary. When you meet this problem in a real interview, the interviewer may just want to test your basic implementation ability. But make sure you confirm with the interviewer first.
Example
Example 1:

Input: source = "source" ，target = "target"
Output: -1	
Explanation: If the source does not contain the target content, return - 1.
Example 2:

Input:source = "abcdabcdefg" ，target = "bcd"
Output: 1	
Explanation: If the source contains the target content, return the location where the target first appeared in the source.
Challenge
O(n2) is acceptable. Can you implement an O(n) algorithm? (hint: KMP)
*/

class Solution {
public:
    /**
     * @param source: 
     * @param target: 
     * @return: return the index
     */
    int strStr(string &source, string &target) {
        // Write your code here
        //B-F算法
        int i = 0, j = 0;
        int m = source.length();
        int n = target.length();
        if(!m && !n) return 0;
        if(!m) return -1;
        if(!n) return 0;
        for(i = 0; i <= m - n; ++i)
        {
            if(source[i] == target[0])
            {
                for(j = 0; j < n; ++j)
                {
                    if(source[i + j] != target[j]) break;
                    else continue;
                }
                if(j == n) return i;
                else continue;
            }
        }
        //unmatched return -1
        return -1;
    }
};
