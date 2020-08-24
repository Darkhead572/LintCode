/*

requirements

1895. Arrange interview city
Today, there are N interviewers who need to be interviewed. The company has arranged two interview cities A and B. Each interviewer has a cost A to City A and a cost B to City B. The company needs to divide the interviewers into two groups with same numbers to minimize the total cost.

Example
Input: cost = [[5,4],[3,6],[1,8],[3,9]]
Output: 14
Explanation: The first and the second goes to city B,the others go to city A.
Clarification
It is required that the number to go to A is equal to the number to go to B

Notice
N is even
2<=N<=1e5
The ans is in the range of int
1<=costA,costB <=1e6
*/

class Solution {
public:
    /**
     * @param cost: The cost of each interviewer
     * @return: The total cost of all the interviewers.
     */
    int TotalCost(vector<vector<int>> &cost) {
        // write your code here
        typedef pair<int, int> mypair;
        int m = cost.size(), res = 0;
        vector<mypair> tmp(m, make_pair(0, 0));
        for (int i = 0; i < m; ++i)
            tmp[i] = move(make_pair(cost[i][0] - cost[i][1], i));
        sort(tmp.begin(), tmp.end(),
        [&](const mypair& a, const mypair& b)
        {
            return a.first < b.first;
        });
        for (int i = 0; i < m; ++i)
        {
            if (i < m / 2)
                res += cost[tmp[i].second][0];
            else
                res += cost[tmp[i].second][1];
        }
        return res;
    }
};