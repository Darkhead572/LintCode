/*

464. Sort Integers II
Given an integer array, sort it in ascending order in place. Use quick sort, merge sort, heap sort or any O(nlogn) algorithm.

Example
Example1:

Input: [3, 2, 1, 4, 5], 
Output: [1, 2, 3, 4, 5].
Example2:

Input: [2, 3, 1], 
Output: [1, 2, 3].
*/

class Solution {
public:
    /**
     * @param A: an integer array
     * @return: nothing
     */
    void sortIntegers2(vector<int> &A) {
        // write your code here
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for (int i = 0; i < A.size(); ++i)
        {
            minHeap.push(A[i]);
        }
        for (int i = 0; i < A.size(); ++i)
        {
            A[i] = minHeap.top();
            minHeap.pop();
        }
    }
};