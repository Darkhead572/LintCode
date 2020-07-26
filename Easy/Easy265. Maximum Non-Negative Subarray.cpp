/*

265. Maximum Non-Negative Subarray

Given an integer arrayA, find the contiguous array (containing at least one number, and each numer is non negative), which has the largest sum and return its sum

Example
input:[1,2,-3,4,5,-6]
output:9
explation:
A[0]=1
A[1]=2
A[0]+A[1]=3
A[3]=4
A[4]=5
A[3]+A[4]=9

Notice
return -1 if each number of A is negative
1 \leq A.length \leq 10^51≤A.length≤10
​5
​​ 
0 \leq |A_i| \leq 10000≤∣A
​i
​​ ∣≤1000
*/

class Solution {
public:
    /**
     * @param A: an integer array
     * @return: return maxium contiguous non-negative subarray sum
     */
    int maxNonNegativeSubArray(vector<int> &A) {
        // write your code here
        int n = A.size();
        if (n == 0) return 0;
        int sum = 0, maxSum = 0;
        int posCount = 0;
        for (int i = 0; i < n; ++i)
        {
            if (A[i] < 0) 
            {
                sum = 0;
            } 
            else
            {
                sum += A[i];
                posCount++;
            } 
            if (maxSum < sum) 
            {
                maxSum = sum;
            }
        }
        if (posCount == 0) return -1;
        return maxSum;
    }
};