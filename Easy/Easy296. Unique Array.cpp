/*

requirements

296. Unique Array
Given an integer array arrarr with size NN, return the array after removing the repeating elements (the relative order of elements must be unchanged after the removal operation).

Example
Example:
Input:[3,4,3,6]
Output:[3,4,6]
Explanation: The element 3 is repeated, so only the first one should be remained.
Besides, the relative order should not change, so element 4 is after element 3, and element 6 is after the previous two.

Notice
1 \leq N \leq 10^51≤N≤10
​5
​​ 
-10^9 \leq arr[i] \leq 10^9−10
​9
​​ ≤arr[i]≤10
​9
​​
*/

class Solution {
public:
    /**
     * @param arr: a integer array
     * @return: return the unique array
     */
    vector<int> getUniqueArray(vector<int> &arr) {
        // write your code here
        unordered_map<int, bool> index;
        vector<int> res;
        for (int i = 0; i < arr.size(); ++i)
        {
            if (index.find(arr[i]) == index.end())
            {
                index[arr[i]] = true;
                res.push_back(arr[i]);
            }
            else continue;
        }
        return res;
    }
};