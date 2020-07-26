/*

requirements

551. Nested List Weight Sum
Given a nested list of integers, return the sum of all integers in the list weighted by their depth. Each element is either an integer, or a list -- whose elements may also be integers or other lists.

Example
Example 1:

Input: the list [[1,1],2,[1,1]], 
Output: 10. 
Explanation:
four 1's at depth 2, one 2 at depth 1, 4 * 1 * 2 + 1 * 2 * 1 = 10
Example 2:

Input: the list [1,[4,[6]]], 
Output: 27. 
Explanation:
one 1 at depth 1, one 4 at depth 2, and one 6 at depth 3; 1 + 4 * 2 + 6 * 3 = 27
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
    int depthSum(const vector<NestedInteger>& nestedList) {
        // Write your code here
        if (nestedList.size() == 0)
            return 0;
        queue<NestedInteger> q;
        for (int i = 0; i < nestedList.size(); ++i)
            q.push(nestedList[i]);
        int depth = 1; int sum = 0;
        while (!q.empty())
        {
            size_t l = q.size();
            for (int i = 0; i < l; ++i)
            {
                   NestedInteger first = q.front();
                   q.pop();
                   if (first.isInteger())
                   {
                       int temp = first.getInteger();
                       sum += temp * depth;
                       continue;
                   }
                   vector<NestedInteger> temp = first.getList();
                   for (int i = 0; i < temp.size(); ++i)
                       q.push(temp[i]);
            }
            ++depth;
        }
        return sum;
    }
};