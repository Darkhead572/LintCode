/* requirements

111. Climbing Stairs
中文English
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example
Example 1:
	Input:  n = 3
	Output: 3
	
	Explanation:
	1) 1, 1, 1
	2) 1, 2
	3) 2, 1
	total 3.


Example 2:
	Input:  n = 1
	Output: 1
	
	Explanation:  
	only 1 way.

*/

class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        // write your code here
        if (n == 0)
			return 0;
        int a = 0;
        int b = 1;
        while (n > 0)
		{
            b = a + b;
            a = b - a;
            n--;
        }
        return b;
    }
};