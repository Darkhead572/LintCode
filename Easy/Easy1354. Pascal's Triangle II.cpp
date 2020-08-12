/*

requirements

1354. Pascal's Triangle II
Given a non-negative index k where k ≤ 33, return the kth index row of the Pascal's triangle.

Example
Example1

Input: 3
Output: [1,3,3,1]
Example2

Input: 4
Output: [1,4,6,4,1]
Challenge
Could you optimize your algorithm to use only O(k) extra space?

Notice
1.Note that the row index starts from 0.
2.In Pascal's triangle, each number is the sum of the two numbers directly above it.
*/

class Solution {
public:
    /**
     * @param rowIndex: a non-negative index
     * @return: the kth index row of the Pascal's triangle
     */
    vector<int> getRow(int rowIndex) {
        // write your code here
        vector<int> res;
        for (int i = 0; i <= rowIndex; ++i)
            res.emplace_back(C(rowIndex, i));
        return res;
    }
private:
    long double fact(const int& n)
    {
        long double res = 1;
        for (int i = 1; i <= n; ++i)
            res *= i;
        return res;
    }
    long double factInterval(const int& a, const int& b)
    {
        long double res = 1;
        for (int i = a; i <= b; ++i)
            res *= i;
        return res;
    }
    int C(const int& m, const int& n)
    {
        if (m - n > n)
            return factInterval(m - n + 1, m) / fact(n);
        else
            return factInterval(n + 1, m) / fact(m - n);
    }
};

// better solution
/*
class Solution {
public:
    /**
     * @param rowIndex: a non-negative index
     * @return: the kth index row of the Pascal's triangle
     */
/*
    vector<int> getRow (int rowIndex) {
        // write your code here
        vector<int>ans;
        int i, j;

        long long val = 1;
        ans.push_back (val);
        for (i = rowIndex; i >= 1; i--) {
            val *= i;
            val /= (rowIndex - i + 1);
            ans.push_back (val);
        }
        return ans ;
    }
};
*/