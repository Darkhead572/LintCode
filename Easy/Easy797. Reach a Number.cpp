/*

requirements

797. Reach a Number
You are standing at position 0 on an infinite number line. There is a goal at position target.

On each move, you can either go left or right. During the n-th move (starting from 1), you take n steps.

Return the minimum number of steps required to reach the destination.

Example
Example1

Input: target = 3
Output: 2
Explanation:
On the first move we step from 0 to 1.
On the second step we step from 1 to 3.
Example2

Input: target = 2
Output: 3
Explanation:
On the first move we step from 0 to 1.
On the second move we step  from 1 to -1.
On the third move we step from -1 to 2.
Notice
target will be a non-zero integer in the range [-10^9, 10^9].
*/

class Solution {
public:
    /**
     * @param target: the destination
     * @return: the minimum number of steps
     */
    int reachNumber(int target) {
        // Write your code here
        target = abs(target);
        long long n = ceil((-1.0 + sqrt(1 + 8.0 * target)) / 2);
        long long sum = n * (n+1) / 2;
        if (sum == target)
            return n;
        long long res = sum - target;
        if ((res & 1) == 0)
            return n;
        else
            return n + ((n & 1) ? 2: 1);
    }
};