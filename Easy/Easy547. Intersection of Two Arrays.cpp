/*

requirements

547. Intersection of Two Arrays
Given two arrays, write a function to compute their intersection.

Example
Example 1:

Input: nums1 = [1, 2, 2, 1], nums2 = [2, 2], 
Output: [2].
Example 2:

Input: nums1 = [1, 2], nums2 = [2], 
Output: [2].
Challenge
Can you implement it in three different algorithms?

Notice
Each element in the result must be unique.
The order of the results needs to be ascending
*/

class Solution {
public:
    /**
     * @param nums1: an integer array
     * @param nums2: an integer array
     * @return: an integer array
     */
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
        // write your code here
        set<int> set1(nums1.begin(), nums1.end());
        set<int> set2;
        for (int i = 0; i < nums2.size(); ++i)
        {
            if (set1.count(nums2[i])) 
                set2.insert(nums2[i]);
        }
        vector<int> res;
        for (auto num : set2)
            res.push_back(num);

        return res;
    }
};