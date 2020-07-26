/*

requirements

768. Yang Hui Triangle
Given an integer n, return the first n-line Yang Hui triangle.

Example
Example 1:

Input : n = 4
Output :  
[
 [1]
 [1,1]
 [1,2,1]
 [1,3,3,1]
]
Notice
1.0<=n<=20
2.Yang Hui’s Triangle also called Pascal's triangle. --(Wikipedia)
*/

class Solution {
public:
    /**
     * @param n: a Integer
     * @return: the first n-line Yang Hui's triangle
     */
    vector<vector<int>> calcYangHuisTriangle(int n) {
        // write your code here
        vector<vector<int>> res;
        if (n <= 0) return res;
        for (int i = 0; i < n; ++i)
        {
            vector<int> tmp(i + 1, 1);
            if (i == 0 || i == 1)
                res.push_back(tmp);
            else
            {
                for (int j = 1; j < res[i - 1].size(); ++j)
                {
                    tmp[j] = res[i - 1][j - 1] + res[i - 1][j];
                }
                res.push_back(tmp);
            }
        }
        return res;
    }
};