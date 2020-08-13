/*

requirements

1745. Monotonic Array
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array A is monotone increasing if for all i <= j, A[i] <= A[j]. An array A is monotone decreasing if for all i <= j, A[i] >= A[j].

Return true if and only if the given array A is monotonic.

Example
Example 1:

Input: [1,2,2,3]
Output: true
Example 2:

Input: [1,3,2]
Output: false
Notice
1 \leq A.length \leq 500001≤A.length≤50000
-100000 \leq A[i] \leq 100000−100000≤A[i]≤100000
*/

class Solution {
public:
    /**
     * @param A: a array
     * @return: is it monotonous
     */
    bool isMonotonic(vector<int> &A) {
        // Write your code here.
        bool tag1 = true, tag2 = true;
        for (int i = 1; i < A.size(); ++i)
        {
            if (A[i] > A[i - 1])
                tag1 = false;
            if (A[i] < A[i - 1])
                tag2 = false;
            if (!tag1 && !tag2)
                break;
        }
        return tag1 || tag2;
    }
};