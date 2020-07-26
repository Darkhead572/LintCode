/*

requirements

420. Count and Say
The count-and-say sequence is the sequence of integers beginning as follows:

1, 11, 21, 1211, 111221, ...

1 is read off as "one 1" or 11.

11 is read off as "two 1s" or 21.

21 is read off as "one 2, then one 1" or 1211.

Given an integer n, generate the nth sequence.

Example
Example 1:

Input: 1
Output: "1"
Example 2:

Input: 5
Output: "111221"
Notice
The sequence of integers will be represented as a string.
*/

class Solution {
public:
    /**
     * @param n: the nth
     * @return: the nth sequence
     */
    string int_to_string(int j) {
        stringstream in;
        in << j;
        string temp;
        in >> temp;
        return temp;    
    }
    
    string genate(string s) {
        string now;
        int j = 0;
        for(int i = 0; i < s.size(); i += j) {
            for(j = 0; j + i < s.size(); j++) {
                if(s[i] != s[i+j]) {
                    break;
                } 
            }
            now = now + int_to_string(j) + s[i];
        }
        return now;
    }
    
    string countAndSay(int n) {
        // write your code here
        string s("1");
        
        while(--n) 
        {
            s = genate(s);
        }
        return s;
    }
};