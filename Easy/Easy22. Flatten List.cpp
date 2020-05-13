/*
22. Flatten List
中文English
Given a list, each element in the list can be a list or integer. flatten it into a simply list with integers.

Example
Example 1:
	Input:  [[1,1],2,[1,1]]
	Output: [1,1,2,1,1]
	
	Explanation:
	flatten it into a simply list with integers.

Example 2:
	Input:  [1,2,[1,2]]
	Output:[1,2,1,2]
	
	Explanation:  
	flatten it into a simply list with integers.

Example 3:
	Input: [4,[3,[2,[1]]]]
	Output:[4,3,2,1]
	
	Explanation: 
	flatten it into a simply list with integers.

Challenge
Do it in non-recursive.

Notice
If the element in the given list is a list, it can contain list too.
*/

/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer,
 *     // rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds,
 *     // if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds,
 *     // if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class Solution {
public:
    // @param nestedList a list of NestedInteger
    // @return a list of integer
    vector<int> res;
    vector<int> flatten(vector<NestedInteger> nestedList) {
        // Write your code here
        for (int i = 0; i < nestedList.size(); i++) {
            /* code */
            if(nestedList[i].isInteger()) res.push_back(nestedList[i].getInteger());
            else
            {
                flatten(nestedList[i].getList());
            }
        }
        return res;
    }
};
