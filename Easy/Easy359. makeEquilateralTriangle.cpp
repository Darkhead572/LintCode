/*

requirements

359. makeEquilateralTriangle
You're giving nn wood sticks, by each cut, you can cut a stick into 22 parts.
Please calculate the minimum number of cuts you need, that you are able to choose 33 of the sticks, to make a equilateral triangle.

Example
Input：
[2,3,7,5]
Output：
2
Clarification
You can cut 22 sticks of length 33 for the stick of length 77, the sticks should be [2,3,1,3,3,5][2,3,1,3,3,5], you can make equilateral triangle of length 33 sticks.

Notice
At the beginning, there are nn sticks, 3 \le n \le 10003≤n≤1000.
All the lengths of sticks is represent by an integer array lengthslengths, 1 \le lengths_i \le 10^91≤lengths
​i
​​ ≤10
​9
​​ .
Each cut must split a stick into 22 sticks with integer length, and their sum should be equal to the original length.
*/

class Solution {
public:
    /**
     * @param lengths: the lengths of sticks at the beginning.
     * @return: return the minimum number of cuts.
     */
    int makeEquilateralTriangle(vector<int> &lengths) {
        // write your code here.
        map<int, int> mymap;
        for (int i = 0; i < lengths.size(); ++i)
        {
            if (mymap.count(lengths[i]))
                ++mymap[lengths[i]];
            else mymap.emplace(lengths[i], 1);
        }
        for (auto & elem: mymap)
        {
            if (elem.second >= 3)
                return 0;
            else if (elem.second == 2 && elem.first < (*mymap.rbegin()).first)
                return 1;
            else if (mymap.count(elem.first * 2))
                return 1;
            else continue;
        }
        return 2;
    }
};