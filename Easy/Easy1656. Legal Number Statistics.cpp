/*

requirements

1656. Legal Number Statistics
Given n integers and two positive integers L, R, output how many integers are in the range between [L, R]

Example
Example 1:

Input: a=[1,2,3,4,5,6],L=3,R=5
Output: 3
Explaination: 
Only a[2],a[3],a[4] are in range of [3,5].
Example 2:

Input: a=[1,5,3,3,3,2],L=1,R=2
Output: 2
Explaination: 
Only a[0],a[5] are in range of [1,2].
Notice
L \leq RL≤R
*/

class Solution {
public:
    /**
     * @param a: the array a
     * @param L: the integer L
     * @param R: the integer R
     * @return: Return the number of legal integers
     */
    int getNum(vector<int> &a, int L, int R) {
        // Write your code here
        int res = 0;
        for (int i = 0; i < a.size(); ++i)
        {
            if (a[i] >= L && a[i] <= R)
                ++res;
        }
        return res;
    }
};