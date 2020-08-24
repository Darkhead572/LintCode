/*

requirements

1649. Super Lollipop
SuperQ and GGbond enter the final of the 100m race. GGbond's speed isv1, SuperQ's speed is v2, GGbond can eat at most one super lollipop before the race, now given n kinds of super lollipops, the i th super lollipop can make GGbond's speed increased by si, and its price is wi。Given v1,v2,s,w,how much GGbond need to pay at least to beat SuperQ in the 100m race?

Example
Example 1：

`v1=15,v2=20,s=[4,5,6,10],w=[2,1,30,31]`,return `30`

Explanation：
s[0]+v1<=v2
s[1]+v1<=v2
s[2]+v1>v2
s[3]+v1>v2
The first two lollipops can't make GGbond run faster than SuperQ
Since the third one is cheaper, we choose the third one, so return 30
Notice
1<=n,v1,v2,s[i],w[i]<=100,they are integers
GGbond can choose not to eat lollipops.
It is guarantees that GGbond has a way to beat SuperQ
*/

class Solution {
public:
    /**
     * @param v1: the speed of GGbond
     * @param v2: the speed of SuperQ
     * @param s: the speed that lollipop can add
     * @param w: the cost of lollipop
     * @return: the minimal price
     */
    int getAns(int v1, int v2, vector<int> &s, vector<int> &w) {
        // Write your code here
        int res = INT_MAX;
        if (v1 > v2) return 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (v1 + s[i] <= v2)
                continue;
            else res = min(res, w[i]);
        }
        return res;
    }
};