/*

requirements

759. Time Angle
Calculate angle between hour hand and minute hand at h:m in a clock.

Example
Example 1:

Input: h = 12, m = 0.
Output: 0
Example 2:

Input: h = 1, m = 0.
Output: 30
Notice
The angle between hour hand and minute hand less than 180
*/

class Solution {
public:
    /**
     * @param h: hours
     * @param m: minutes
     * @return: angle between hour hand and minute hand at X:Y in a clock
     */
    float timeAngle(int h, int m) {
        // write your code here
        float hh = 30 * h + 0.5f * m;
        float mm = 6 * m;
        float result = abs(mm - hh);
        return result > 180 ? (360 - result) : result;
    }
};