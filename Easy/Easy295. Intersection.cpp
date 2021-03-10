/*
295. Intersection
Given two sorted interval sequences, each interval in the sequence does not intersect each other, and returns the index of the interval where the two sequences intersect

Example
imput: a = [[0,3], [7,10]] , b = [[-1,1],[2,8]]
output: ans = [[0,0],[0,1],[1,1]]
Notice
1<= len(a),len(b)<=1e51<=len(a),len(b)<=1e5
abs(max(a))<=1e9abs(max(a))<=1e9
*/

/*
295. 交集
给定两个排序后的区间序列，序列内每个区间两两互不相交，返回两个序列相交的区间的下标

Example
输入: a = [[0,3], [7,10]] , b = [[-1,1],[2,8]]
输出: ans = [[0,0],[0,1],[1,1]]
Notice
1<= len(a),len(b)<=1e51<=len(a),len(b)<=1e5
abs(max(a))<=1e9abs(max(a))<=1e9
*/

class Solution {
public:
    /**
     * @param a: first sequence
     * @param b: second sequence
     * @return: return ans
     */
    bool isIntersection(const vector<int>& a, const vector<int>& b)
    {
        return !(a[1] < b[0] || a[0] > b[1]);
    }
    vector<vector<int>> Intersection(vector<vector<int>> &a, vector<vector<int>> &b) {
        // write your code here
        vector<int> tmp(2, 0);
        vector<vector<int>> result;

        int i = 0, j = 0;

        while (i < a.size() && j < b.size())
        {
            if (a[i][0] < b[j][0])
            {
                if (a[i][1] >= b[j][0])
                {
                    tmp[0] = i, tmp[1] = j;
                    result.emplace_back(tmp);
                }
            }
            else if (b[j][1] >= a[i][0])
            {
                tmp[0] = i, tmp[1] = j;
                result.emplace_back(tmp);
            }

            if (a[i][1] > b[j][1]) j += 1;
            else i += 1;
        }
        return result;
    }
};