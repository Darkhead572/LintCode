/*

requirements

813. Find Anagram Mappings
Given two lists A and B, and B is an anagram of A. B is an anagram of A means B is made by randomizing the order of the elements in A.
We want to find an index mapping P, from A to B. A mapping P[i] = j means the ith element in A appears in B at index j.
These lists A and B may contain duplicates. If there are multiple answers, output any of them.

Example
Example1

Input:  A = [12, 28, 46, 32, 50] and B = [50, 12, 32, 46, 28]
Output: [1, 4, 3, 2, 0]
Explanation:
As P[0] = 1 because the 0th element of A appears at B[1], and P[1] = 4 because the 1st element of A appears at B[4], and so on.
Example2

Input:  A = [1, 2, 3, 4, 5] and B = [5, 4, 3, 2, 1]
Output: [4, 3, 2, 1, 0]
Explanation:
As P[0] = 4 because the 0th element of A appears at B[4], and P[1] = 3 because the 1st element of A appears at B[3], and so on.
Notice
A, B have equal lengths in range [1, 100].
A[i], B[i] are integers in range [0, 10^5].

*/

class Solution {
public:
    /**
     * @param A: lists A
     * @param B: lists B
     * @return: the index mapping
     */
    vector<int> anagramMappings(vector<int> &A, vector<int> &B) {
        // Write your code here
        unordered_set<int> indexs;
        unordered_map<int, vector<int>> hashMap;
        int m = B.size(), j = 0;
        for (int i = 0; i < m; ++i)
        {
            if (hashMap.count(B[i]))
                hashMap[B[i]].push_back(i);
            else
                hashMap[B[i]] = { i };
        }
        vector<int> res(m, -1);
        for (int i = 0; i < m; ++i)
        {
            j = 0;
            vector<int>& tmp = hashMap[A[i]];
            while (indexs.count(tmp[j])) ++j;
            indexs.insert(tmp[j]);
            res[i] = tmp[j];
        }
        return res;
    }
};