/*
64. Merge Sorted Array
中文English
Given two sorted integer arrays A and B, merge B into A as one sorted array.

Example
Example 1:

Input：[1, 2, 3] 3  [4,5]  2
Output：[1,2,3,4,5]
Explanation:
After merge, A will be filled as [1, 2, 3, 4, 5]
Example 2:

Input：[1,2,5] 3 [3,4] 2
Output：[1,2,3,4,5]
Explanation:
After merge, A will be filled as [1, 2, 3, 4, 5]
Notice
You may assume that A has enough space (size that is greater or equal to m + n) to hold additional elements from B. The number of elements initialized in A and B are m and n respectively.
*/

class Solution {
public:
    /*
     * @param A: sorted integer array A which has m elements, but size of A is m+n
     * @param m: An integer
     * @param B: sorted integer array B which has n elements
     * @param n: An integer
     * @return: nothing
     */
    void mergeSortedArray(int A[], int m, int B[], int n) {
        // write your code here
        if(!m) {
            for(int i = 0; i < n; ++i)
            A[i] = B[i];
            return;
        }
        if(!n) return;
        int i = 0, j = 0;
        int *C = new int[m + n];
        for(int k = 0; k < m + n; ++k)
        {
            if (i == m) 
            {
                C[k] = B[j++];
                continue;
            }
            if (j == n)
            {
                C[k] = A[i++];
                continue;
            }
            A[i] < B[j] ? C[k] = A[i++] : C[k] = B[j++];
        }
        for(int k = 0; k < m + n; ++k)
        A[k] = C[k];
        delete []C;
        return;
    }
};
