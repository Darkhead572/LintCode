/*

requirements

1505. Find the Number
Given an unsorted array of n elements, find if the element k is present in the array or not.
Complete the findnNumber function in the editor below.It has 2 parameters:
1 An array of integers, arr, denoting the elements in the array.
2 An integer, k, denoting the element to be searched in the array.
The function must return true or false denoting if the element is present in the array or not

Example
Example:
Input:
arr = [1, 2, 3, 4, 5]
k = 1
Output: true
Notice
1 <= n <= 10^5
1 <= arr[i] <= 10^9
*/

class Solution {
public:
    /**
     * @param nums: a integer array
     * @param k: a integer
     * @return: return true or false denoting if the element is present in the array or not
     */
    bool findnNumber(vector<int> &nums, int k) {
        // write your code here
        return find(nums.begin(), nums.end(), k) != nums.end();
    }
};