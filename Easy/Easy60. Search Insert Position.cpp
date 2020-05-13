/*
60. Search Insert Position
中文English
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume NO duplicates in the array.

Example
[1,3,5,6], 5 → 2

[1,3,5,6], 2 → 1

[1,3,5,6], 7 → 4

[1,3,5,6], 0 → 0

Challenge
O(log(n)) time
*/

//challenge

class Solution {
public:
    /**
     * @param A: an integer sorted array
     * @param target: an integer to be inserted
     * @return: An integer
     */
    int searchInsert(vector<int> &A, int target) {
        // write your code here
        int n = A.size();
        if(!n) return 0;
        int l = 0;
        int r = n - 1;
        int m = (l + r) / 2;
        while(true)
        {
            if(A[m] == target) return m;
            if(A[m] > target)
            {
                r = m - 1;
                m = (l + r) / 2;
                if(l == m) break;
            }
            if(A[m] < target)
            {
                l = m + 1;
                m = (l + r) / 2;
                if(r == m) break;
            }
        }
        if(A[m] >= target) return m;
        else return m + 1;
    }
};
