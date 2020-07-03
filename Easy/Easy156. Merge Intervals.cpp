/*

requirements
156. Merge Intervals
中文English
Given a collection of intervals, merge all overlapping intervals.

样例
Example 1:

Input: [(1,3)]
Output: [(1,3)]
Example 2:

Input:  [(1,3),(2,6),(8,10),(15,18)]
Output: [(1,6),(8,10),(15,18)]
challenge
O(n log n) time and O(1) extra space.
*/

/**
 * Definition of Interval:
 * class Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param intervals: interval list.
     * @return: A new interval list.
     */
    bool isCanMerge(const Interval& a, const Interval& b)
    {
        return max(a.start, b.start) <= min(a.end, b.end);
    }
    Interval merge(const Interval& a, const Interval& b)
    {
        return Interval(min(a.start, b.start), max(a.end, b.end));
    }
    vector<Interval> merge(vector<Interval> &intervals) {
        // write your code here
        vector<Interval> res;
        if(intervals.empty())
            return res;
        else
        {
            sort(intervals.begin(), intervals.end(),
                [&](const Interval a, const Interval b)
                {
                    return a.start < b.start;
                }
            );
        }
        int j = 1;
        Interval tmp = intervals[0];
        
        for (int i = 1; i < intervals.size(); ++i) 
        {
            if (isCanMerge(tmp, intervals[i])) 
            {
                tmp = merge(tmp, intervals[i]);
            }
            else 
            {
                res.push_back(tmp);
                tmp = intervals[i];
            }
        }
        res.push_back(tmp);
        return res;
    }
};