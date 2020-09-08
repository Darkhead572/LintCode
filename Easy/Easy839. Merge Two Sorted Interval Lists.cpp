/*

requirements

839. Merge Two Sorted Interval Lists
Merge two sorted (ascending) lists of interval and return it as a new sorted list. The new sorted list should be made by splicing together the intervals of the two lists and sorted in ascending order.

Example
Example1

Input: list1 = [(1,2),(3,4)] and list2 = [(2,3),(5,6)]
Output: [(1,4),(5,6)]
Explanation:
(1,2),(2,3),(3,4) --> (1,4)
(5,6) --> (5,6)
Example2

Input: list1 = [(1,2),(3,4)] and list2 = [(4,5),(6,7)]
Output: [(1,2),(3,5),(6,7)]
Explanation:
(1,2) --> (1,2)
(3,4),(4,5) --> (3,5)
(6,7) --> (6,7)
Notice
The intervals in the given list do not overlap.
The intervals in different lists may overlap.
*/

/**
 * Definition of Interval:
 * classs Interval {
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
     * @param list1: one of the given list
     * @param list2: another list
     * @return: the new sorted list of interval
     */
    vector<Interval> mergeTwoInterval(vector<Interval> &list1, vector<Interval> &list2) {
        vector<Interval> res;
        int index1 = 0, index2 = 0;
        while (index1 < list1.size() && index2 < list2.size())
        {
            if (list1[index1].start < list2[index2].start)
                push_back(list1[index1++], res);
            else
                push_back(list2[index2++], res);
        }
        while (index1 < list1.size())
            push_back(list1[index1++], res);

        while (index2 < list2.size())
            push_back(list2[index2++], res);
        
        return res;
    }

    void push_back(Interval &interval, vector<Interval> &res) {
        if (res.empty())
        {
            res.push_back(interval);
            return;
        }
        
        if (interval.start > res.back().end)
        {
            res.push_back(interval);
            return;
        }
        
        res.back().end = max(res.back().end, interval.end);
    }
};