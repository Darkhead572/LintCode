/*

requirements

211. String Permutation
Given two strings, write a method to decide if one is a permutation of the other.

Example
Example 1:
	Input:  "abcd", "bcad"
	Output:  True


Example 2:
	Input: "aac", "abc"
	Output:  False
*/

class Solution {
public:
    /**
     * @param A: a string
     * @param B: a string
     * @return: a boolean
     */
    bool Permutation(string &A, string &B) {
        // write your code here
        int characters[256] = {0};
        if (A.size() != B.size()) return false;
        for (int i = 0; i < A.size(); ++i)
        {
            ++characters[A[i]];
            --characters[B[i]];
        }
        for (int i = 0; i < 256; ++i)
        {
            if (characters[i])
                return false;
        }
        return true;
    }
};