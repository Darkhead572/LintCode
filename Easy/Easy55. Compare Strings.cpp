/*
55. Compare Strings

中文English
Compare two strings A and B, determine whether A contains all of the characters in B.

The characters in string A and B are all Upper Case letters.

Example
For A = "ABCD", B = "ACD", return true.

For A = "ABCD", B = "AABC", return false.

Notice
The characters of B in A are not necessary continuous or ordered.
*/
class Solution {
public:
    /**
     * @param A: A string
     * @param B: A string
     * @return: if string A contains all of the characters in B return true else return false
     */
    bool compareStrings(string &A, string &B) {
        // write your code here
        int m = A.length();
        int n = B.length();
        if(!n) return true;
        if(!m || n > m) return false;
        int count[26] = {0};
        for(int i = 0; i < m; ++i)
            ++count[A[i] - 65];
        for(int i = 0; i < n; ++i)
        {
            --count[B[i] - 65];
            if(count [B[i] - 65] < 0) return false;
        }
        return true;
    }
};
