/*

requirements

766. Leap Year
Determine whether year n is a leap year.return true if n is a leap year.

Example
Example 1:

Input : n = 2008
Output : true
Example 2:

Input : n = 2018
Output : false
Notice
A leap year (also known as an intercalary year or bissextile year) is a calendar year containing one additional day.if a year is divisible by 4 and not divisible by 100 or divisible by 400,it is a leap year. --wikipedia
*/

class Solution {
public:
    /**
     * @param n: a number represent year
     * @return: whether year n is a leap year.
     */
    bool isLeapYear(int n) {
        // write your code here
        return !(n % 400) || (!(n % 4) && (n % 100));
    }
};