/*

requirements

1878. Rotated Nums
X is a good number when all the number rotates 180° and still be itself.Like "1" ,"2" ,"0”,"12021","69" and "96". It must be noted that we use numbers like the nums on the traffic lights.

Give you a len n,we need to count how many good numbers of length n.

Example
Input: n = 1
Output: 5
Explanation: 5 good nums is "0","1","2","5","8"
Input: n = 2
Output: 6
Explanation: 6 good nums is "11","22","55","88","69","96"
Notice
Rotate the whole good number, not every bit.
Except 0, good numbers cannot contain leading zeros.
1<=n<=40
*/

class Solution {
public:
    /**
     * @param n: length of good nums
     * @return: The num of good nums of length n
     */
    long long RotatedNums(int n) {
        // write your code here
        if (n == 1) return 5;
        if (n == 2) return 6;
        int mid = (n - 1) / 2;
        long long pre = 1;
 
        if (n % 2)
        {
            for (int i = 1; i <= mid - 1; ++i)
                pre *= 7;
            return 5 * pre * 6;
        }
        else
        {
            for (int i = 1; i <= mid; ++i)
                pre *= 7;
        }
        return pre * 6;
    }
};