/*

requirements

846. Multi-keyword Sort
Given n students and their test scores, expressed as (student number, test scores), sort by test scores in descending order, if the test scores are the same, sort the student number in ascending order.

Example
Example1

Input: array = [[2,50],[1,50],[3,100]]
Output: [[3,100],[1,50],[2,50]]
Example2

Input: array = [[2,50],[1,50],[3,50]]
Output: [[1,50],[2,50],[3,50]]
*/

class Solution {
public:
    /**
     * @param array: the input array
     * @return: the sorted array
     */
    vector<vector<int>> multiSort(vector<vector<int>> &array) {
        // Write your code here
        sort(array.begin(), array.end(), 
        [&](const vector<int>& a, const vector<int>& b)
        {
            if (a[1] > b[1])
                return true;
            else if (a[1] < b[1])
                return false;
            else return
                a[0] < b[0];
        });
        return array;
    }
};