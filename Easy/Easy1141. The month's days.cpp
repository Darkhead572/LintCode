/*

requirements

1141. The month's days
Given a year and month, return the days of that month.

Example
Example 1:

Input: 
2020 
2
Output: 
29
Example 2:

Input: 
2020 
3
Output: 
31
Notice
1 \leq year \leq 100001≤year≤10000
1 \leq month \leq 121≤month≤12
*/

class Solution {
public:
    /**
     * @param year: a number year
     * @param month: a number month
     * @return: Given the year and the month, return the number of days of the month.
     */
    int getTheMonthDays(int year, int month) {
        // write your code here
        int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        if (month == 2)
            return 28 + isLeapYear(year);
        else return months[month - 1];
    }
private:
    bool isLeapYear(const int& year)
    {
        return !(year % 400) || !(year % 4) && (year % 100);
    }
};