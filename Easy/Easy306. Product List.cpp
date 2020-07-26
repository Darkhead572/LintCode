/*

requirements

306. Product List
There is a list of goods, which is composed of L1 and L2 sublists. When users browse and turn the page, they need to get products from list L1 and L2 for display. The display rules are as follows:

The user can flip through the page for many times, using offsetoffset to represent the number of items the user has browsed. For example, the offsetoffset is 44, which means the user has seen 44 goods.
nn represents the number of items that can be displayed on a page.
First use list L1L1 when displaying the goods. If list L1L1 is insufficient, select the goods from list L2L2.
When completing the goods from List L2L2, the quantity may be insufficient.
Given offset, n and length of list L1 and L2. According to the above rules, calculate which items in list L1 and L2 are displayed on the current page.

You should print two intervals according to the notice.

Example
Example 1:

Input: 
2
4
4
4
Output: 
[2,4,0,2]
Example 2:

Input: 
1
2
4
4
Output: 
[1,3,0,0]
Notice
The interval is represented by a half-closed and half-open interval, which includes the starting point but not the end point. For example, the interval [0,1)[0,1) represents the first good.If the interval of a list is empty, use [0, 0)[0,0); if a list is skipped, use [len, len)[len,len), which represents the length of the list.
*/

class Solution {
public:
    /**
     * @param offset: the number of items that the customer has viewed
     * @param n: the number of items that can be displayed on a page
     * @param len1: the length of L1
     * @param len2: the length of L2
     * @return: returns the intervals of goods displayed in L1 and L2
     */
    vector<int> ProductList(int offset, int n, int len1, int len2) {
        // write your code here
        vector<int> res(4, 0);
        if (offset < len1)
        {
            res[0] = offset;
            res[1] = min(offset + n, len1);
            if (offset + n >= len1)
            {
                int diff = offset + n - len1;
                res[3] = min(diff, len2);
            }
        }
        else
        {
            res[0] = res[1] = len1;
            if (offset - len1 > len2)
                return res;
            else
            {
                res[2] = offset - len1;
                res[3] = min(offset - len1 + n, len2);
                return res;
            }
        }
    }
};