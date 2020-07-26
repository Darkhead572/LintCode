/*

requirements

764. Calculate Circumference And Area
Given radius r, returns the circle's circumference nums[0] and area nums[1].The result retains two decimal places.

Example
Example 1:

Input : r = 2
Output : [12.56, 12.56]
Notice
PI = 3.14
*/

class Solution {
public:
    /**
     * @param r: a Integer represent radius
     * @return: the circle's circumference nums[0] and area nums[1]
     */
    vector<double> calculate(int r) {
        // write your code here
        vector<double> res = { 2 * 3.14 * r, 3.14 * r * r };
        return res;
    }
};