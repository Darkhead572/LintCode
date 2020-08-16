/*

requirements

318. Character Grid
You are given two words, A and B.Please return a matrix. The word A must be output horizontally,and the word B vertically, so that the two words cross (i.e. share exactly one letter). The shared
letter must be the first letter in A that is also contained in B. More specifically the first occurrence of that letter in each word. All other characters in the grid must be periods (the character”. without quotes).For example, given the words A =“ABBA" and B= "CCBB". you need to return 4 lines as shown below:

[“.C..”,
 “.C..”,
 ”ABBA“,
 ”.B..“]
Example
Example 1:

Input:
“BANANA”
“APPLE”
Output:
["BANANA",
 ".P....",
 ".P....",
 ".L....",
 ".E...."]
Example 2:

Input:
"TRIANGLE"
"RECTANGLE"
Output:
["R.......",
 "E.......",
 "C.......",
 "TRIANGLE",
 "A.......",
 "N.......",
 "G.......",
 "L.......",
 "E......."]
Notice
1 \leq A.length,B.length \leq 301≤A.length,B.length≤30
It's guaranteed that A and B share a letter at least
*/

class Solution {
public:
    /**
     * @param A: A string
     * @param B: A string
     * @return: A string array
     */
    vector<string> characterGrid(string &A, string &B) {
        // write your code here.
        unordered_map<char, int> hashMap;
        int posA = -1, posB = -1;
        size_t m = A.length();
        size_t n = B.length();
        string tmp(m, '.');
        vector<string> res(n, tmp);
        // 1.Travelsal all characters of string B. Then record the first position of each unique character.
        for (size_t i = 0; i < n; ++i)
        {
            if (!hashMap.count(B[i]))
                hashMap[B[i]] = i;
        }
        // 2.Travelsal all characters of string A. Then find the first of position of the first common character between string A and string B.
        for (size_t i = 0; i < m; ++i)
        {
            if (hashMap.count(A[i]))
            {
                posA = i, posB = hashMap[A[i]];
                break;
            }
            else continue;
        }
        // 3.Modify result character grid.
        res[posB] = A;
        for (size_t i = 0; i < n; ++i)
            res[i][posA] = B[i];
        return res;
    }
};