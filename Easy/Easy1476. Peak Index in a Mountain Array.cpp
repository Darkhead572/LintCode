/*

requirements

1476. Peak Index in a Mountain Array
Let's call an array A a mountain if the following properties hold:

A.length >= 3
There exists some 0 < i < A.length - 1 such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1]
Given an array that is definitely a mountain, return any i such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1].
Example
Example 1:

Input: [0,1,0]
Output: 1
Example 2:

Input: [0,2,1,0]
Output: 1
Notice
1.3 <= A.length <= 10000
2.0 <= A[i] <= 10^6
*/

class Solution {
public:
    /**
     * @param A: an array
     * @return: any i such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1]
     */
    int peakIndexInMountainArray(vector<int> &A) {
        // Write your code here
        int n = A.size(), left = 0, right = n - 1;
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (A[mid] < A[mid + 1])
                left = mid + 1;
            else right = mid;
        }
        return right;
    }
};