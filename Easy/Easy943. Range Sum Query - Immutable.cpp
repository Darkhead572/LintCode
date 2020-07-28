/*

requirements

943. Range Sum Query - Immutable
Given an integer array nums, find the sum of the elements between indices i and j (i ≤ j), inclusive.

Example
Example1

Input: nums = [-2, 0, 3, -5, 2, -1]
sumRange(0, 2)
sumRange(2, 5)
sumRange(0, 5)
Output:
1
-1
-3
Explanation: 
sumRange(0, 2) -> (-2) + 0 + 3 = 1
sumRange(2, 5) -> 3 + (-5) + 2 + (-1) = -1
sumRange(0, 5) -> (-2) + 0 + 3 + (-5) + 2 + (-1) = -3
Example2

Input: 
nums = [-4, -5]
sumRange(0, 0)
sumRange(1, 1)
sumRange(0, 1)
sumRange(1, 1)
sumRange(0, 0)
Output: 
-4
-5
-9
-5
-4
Explanation: 
sumRange(0, 0) -> -4
sumRange(1, 1) -> -5
sumRange(0, 1) -> (-4) + (-5) = -9
sumRange(1, 1) -> -5
sumRange(0, 0) -> -4
Notice
You may assume that the array does not change.
There are many calls to sumRange function.

*/

/*
class NumArray {
public:
    NumArray(vector<int> nums): data(nums) {}
    
    int sumRange(int i, int j) {
        int res = 0;
        for (; i <= j; ++i)
            res += data[i];
        return res;
    }
private:
    vector<int> data;
};
*/
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
// better solution
class NumArray {
public:

    vector<int> sum;
    NumArray (vector<int> nums) {
        sum.push_back (0);
        for (int i = 1; i <= nums.size(); i++) {
            sum.push_back (sum.back() + nums[i - 1]);
        }
    }

    int sumRange (int i, int j) {
        return sum[j + 1] - sum[i];
    }
};