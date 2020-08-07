/*

requirements

1168. array score
You are given an array numsnums, and three postive integers k,u,lk,u,l.
For every subarray whose length is kk of nums, if its sum is less than uu, you'll get 11 score, if its sum is greater than ll, you'll lose 11 score.
Please calculate the score you'll get in the end.

Example
Sample Input:
nums = [0, 1, 2, 3, 4]
k = 2
u = 2
l = 5
Sample Output:
0
Clarification
In the example, all the subarray whose length equals 22 are [0, 1], [1, 2], [2, 3], [3, 4][0,1],[1,2],[2,3],[3,4]，and their sums are 1,3,5,71,3,5,7. in case of 1<21<2, you get 11 score, and 7>57>5, you lose 11 score. You get totally 00 score, finally.

Notice
The length of numsnums is nn, 1 \leq n \leq 10^51≤n≤10
​5
​​ .
nums_inums
​i
​​  is the elemental of numsnums, 0 \leq nums_i \leq 10^50≤nums
​i
​​ ≤10
​5
​​ .
1 \leq k \leq n1≤k≤n.
1 \leq u \leq l \leq 10^{10}1≤u≤l≤10
​10
​​ .
The final score could be negative.


*/

class Solution {
public:
    /**
     * @param nums: the array to be scored.
     * @param k: the requirement of subarray length.
     * @param u: if the sum is less than u, get 1 score.
     * @param l: if the sum is greater than l, lose 1 score.
     * @return: return the sum of scores for every subarray whose length is k.
     */
    int arrayScore(vector<int> &nums, int k, long long u, long long l) {
        // write your code here.
        long long sum = 0; int cnt = 0;
        for (long long i = 0; i < k; ++i)
            sum += nums[i];
        if (sum < u) ++cnt;
        if (sum > l) --cnt;
        for (long long i = k; i < nums.size(); ++i)
        {
            sum -= nums[i - k];
            sum += nums[i];
            if (sum < u) ++cnt;
            if (sum > l) --cnt;
        }
        return cnt;
    }
};