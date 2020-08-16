/*

requirements

282. Decrypt the String
Xiao Q wanted to send a mysterious string to his friend, but he found that the string was too long, so Xiao Q invented a compression algorithm to compress the repeated part of the string, for the continuous m same string S will be compressed to [m|S] (m is an integer and 1<=m<=100). For example, the string ABCABCABC will be compressed to [3|ABC].Now Xiao A receives the string sent by Xiao Q, can you help him decompress it?

Example
input : "HG[3|B[2|CA]]F"
output : "HGBCACABCACABCACAF"
Explain : HG[3|B[2|CA]]F  −−>  HG[3|BCACA]F  −−>  HGBCACABCACABCACAF
Notice
The length of S<=1000.
S contains only uppercase letters, [,], | |.
The length of answer does not exceed 100,000.
The number of compressed recursive layers does not exceed 10.
*/

class Solution {
public:
    /**
     * @param Message: the string xiao Q sent to xiao A.
     * @return: the string after decompress
     */
    string DecompressString(string &Message) {
        // write your code here
        int i = 0, cnt = 0;
        string tmp, res;
        // stores '[' and ']'
        stack<char> tags;
        stack<string> duplicate;
        stack<int> times;
        while (i < Message.length())
        {
            if (tags.empty() && isalpha(Message[i]))
                res += Message[i++];
            else if (Message[i] == '[')
            {
                //skip '['
                tags.push(Message[i++]);
                tmp.clear();
                while (Message[i] != '|')
                    tmp += Message[i++];
                times.push(stoi(tmp));
                // skip '|', clear content of tmp
                ++i; tmp.clear();
                while (isalpha(Message[i]))
                    tmp += Message[i++];
                duplicate.push(tmp);
            }
            else if (Message[i] == ']')
            {
                // skip ']'
                tmp.clear(); ++i;
                cnt = times.top();
                while (cnt--)
                    tmp += duplicate.top();
                times.pop(); tags.pop();
                duplicate.pop();
                if (tags.empty())
                    res += tmp;
                else
                {
                    while (isalpha(Message[i]))
                        tmp += Message[i++];
                    tmp = duplicate.top() + tmp;
                    duplicate.pop();
                    duplicate.push(tmp);
                }
            }
        }
        return res;
    }
};