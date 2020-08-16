/*

requirements

784. The Longest Common Prefix II
Given n strings dic and a target string, output the maximum length of the longest common prefix of the target string with the given n strings.

Example
Example1

Input: dic = ["abcba","acc","abwsf"] and target = "abse"
Output: 2
Explanation:
The longest common prefix of “abse” and “abcba” is “ab”, and the length is 2. The longest common prefix of “abse” and “acc” is “a”, and the length is 1. The longest common prefix of “abse” and “abwsf” is “ab”, and the length is 2. max(2,1,2) = 2.
Example2

Input: dic = ["aaa","bbb","aabb"] and target = "aaab"
Output: 3
Explanation:
The longest common prefix of “aaab” and “aaa” is “aaa”, and the length is 3. The longest common prefix of “aaab” and "bbb" is "", and the length is 0. The longest common prefix of “aaab” and “aabb” is “aa”, and the length is 2. max(3,0,2) = 3.
Notice
The sum of the length of n strings is sum, 1 <= sum <= 50000. The length of each string is greater than 0(i.e. there is no empty string).
*/

class Solution {
public:
    /**
     * @param dic: the n strings
     * @param target: the target string
     * @return: The ans
     */
    int the_longest_common_prefix(vector<string> &dic, string &target)
    {
        int maximum = INT_MIN, tmp = 0;
        for (int i = 0; i < dic.size(); ++i)
        {
            tmp = prefix(dic[i], target);
            maximum = max(maximum, tmp);
        }
        return maximum;
    }
private:
    int prefix(const string& str, const string &target)
    {
        string prefix; string nowStr;
        if (str.length() > target.length())
            prefix = target, nowStr = str;
        else prefix = str, nowStr = target;
    
        for (int i = 1; i <= prefix.length(); ++i)
        {
            if (nowStr.find(prefix) != -1)
                break;
            else prefix.pop_back();
        }
        
        return prefix.length();
    }
};