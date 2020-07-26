/*

requirements
141. Sqrt(x)
中文English
Implement int sqrt(int x).

Compute and return the square root of x.

Example
Example 1:
	Input:  0
	Output: 0


Example 2:
	Input:  3
	Output: 1
	
	Explanation:
	return the largest integer y that y*y <= x. 
	
Example 3:
	Input:  4
	Output: 2
	

Challenge
O(log(x))

*/

//challenge O(log(x))
class Solution {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        // write your code here
        if (x == 0) return x;        
        long long down = 1, upper = x; // 2, 2
        while (down < upper)
        {
            long long mid = (down + upper) / 2; // 1
            if (mid * mid <= x && (mid + 1) * (mid + 1) > x)
            {
                return mid;
            }
            else if (mid * mid < x)
            {
                down = mid + 1;
            }
            else
            {
                upper = mid - 1;
            }
        }       
        return (int)down;
    }
};

/*A lazy implement
class Solution {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        // write your code here
        return (int)pow(x, 0.5);
    }
};
*/