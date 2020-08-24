/*

requirements

1659. Legal Number Statistics II
Given n integers and m queries, each query containing two integers L, R, for each quey output how many integers are in the range between [L, R].

Example
Example 1

Input: a=[1,2,3,4,5,6],q=[[1,2],[1,5]]
Output: [2,5]
Explanation:
For query[1,2], there are a[0],a[1] are legal.
For query[1,5], there are a[0],a[1],a[2],a[3],a[4] are legal
Example 2

Input : a=[1,5,3,3,3,2],q=[[1,2]]
Output: [2]
Explanation:
For query[1,2], only a[0],a[5] are legal.
*/

class Solution {
public:
    /**
     * @param a: the array a
     * @param q: the queries q
     * @return: for each query, return the number of legal integers 
     */
    vector<int> getAns(vector<int> &a, vector<vector<int>> &q) {
        // write your code here
        vector<int> res(q.size(), 0);
        for (int i = 0; i < q.size(); ++i)
        {
            for (int j = 0; j < a.size(); ++j)
            {
                if (a[j] >= q[i][0] && a[j] <= q[i][1])
                    ++res[i];
            }
        }
        return res;
    }
};