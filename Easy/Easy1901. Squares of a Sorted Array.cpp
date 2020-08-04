/*

requirements

1901. Squares of a Sorted Array
Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.

Example
Example 1

Input: [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Example 2

Input: [-7,-3,2,3,11]
Output: [4,9,9,49,121]
Notice
1 <= A.length <= 10000
-10000 <= A[i] <= 10000
A is sorted in non-decreasing order.
*/
class Solution {
public:
    /**
     * @param A: The array A.
     * @return: The array of the squares.
     */
     // a simple solution, O(n + nlogn) = O(nlogn)
     /*
     vector<int> SquareArray(vector<int> &A) {
         for (int i = 0; i < A.size(); ++i)
             A[i] *= A[i];
         sort(A.begin(), A.end());
         return A;
     }
     */
    vector<int> SquareArray(vector<int>& A) {
        int i = 0, m = A.size();
        vector<int> res(m, 0);
        for (i = 0; i < m; ++i)
            if (A[i] >= 0) break;
        int j = i - 1, k = 0;
        while (k < m)
        {
            if (j == -1)
            {
                while (i < m)
                {
                    res[k++] = A[i] * A[i];
                    ++i;
                }
                break;
            }
            else if (i == m)
            {
                while (j >= 0)
                {
                    res[k++] = A[j] * A[j];
                    --j;
                }
                break;
            }
            if (A[i] + A[j] >= 0)
            {
                res[k++] = A[j] * A[j];
                --j;
            }
            else
            {
                res[k++] = A[i] * A[i];
                ++i;
            }
        }
        return res;
    }
};