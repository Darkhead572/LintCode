/*

requirements

280. Closest City
There are many cities on a two-dimensional plane, all cities have their own names c[i]c[i], and location coordinates (x[i],y[i])(x[i],y[i]) (both are integers). There are qq group queries, and each group query gives a city name. You need to answer the city name that is the closest to the city and has the same xx or yy.

Example
Example 1：

Input: x = [3, 2, 1] y = [3, 2, 3] c = ["c1", "c2", "c3"] q = ["c1", "c2", "c3"]
Output: ["c3", "NONE", "c1"]
Explanation: For c1, c3 is the same as its y, the closest distance is (3-1)+(3-3)=2
For c2, no city is the same as its x or y
For c3, c1 is the same as his y, the closest distance is (3-1)+(3-3)=2
Notice
If there are multiple answers that satisfy the conditions, the one with the smallest lexicographic name is output.

The distance here is the Euler distance: the absolute value of the coordinate difference of xx plus the absolute value of the coordinate difference of yy.

0\leq0≤ Number of cities \leq10^5≤10
​5
​​ , 0\leq0≤ Ask for the number of groups \leq 10≤10, 1\leq1≤ Coordinate range \leq 10^9≤10
​9
​​
*/

class Solution {
public:
    /**
     * @param x: an array of integers, the x coordinates of each city[i]
     * @param y: an array of integers, the y coordinates of each city[i]
     * @param c: an array of strings that represent the names of each city[i]
     * @param q: an array of strings that represent the names of query locations
     * @return: the closest city for each query
     */
    vector<string> NearestNeighbor(vector<int> &x, vector<int> &y, vector<string> &c, vector<string> &q) {
        // write your code here
        typedef pair<int, int> point;
        // 1. Establish a bidirection between points and city names
        unordered_map<string, point> hashMap;
        // 2. Record the city name at the specific x/y
        unordered_map<int, vector<string>> xMap;
        unordered_map<int, vector<string>> yMap;
        for (int i = 0; i < x.size(); ++i)
        {
            hashMap[c[i]] = make_pair(x[i], y[i]);
            // using xMap to record x
            if (xMap.count(x[i]))
                xMap[x[i]].push_back(c[i]);
            // call move assignment function
            else xMap[x[i]] = move(vector<string>(1, c[i]));
            // using yMap to record y
            if (yMap.count(y[i]))
                yMap[y[i]].push_back(c[i]);
            // call move assignment function
            else yMap[y[i]] = move(vector<string>(1, c[i]));
        }
        int m = q.size(), nowmin = 0, dis = 0;
        vector<string> res(m, "NONE");
        // 3. Travelsal query table q
        for (int i = 0; i < m; ++i)
        {
            // temporary minimum
            nowmin = INT_MAX;
            // get the point according to q[i]
            point tmp = hashMap[q[i]];
            if (xMap.count(tmp.first))
            {
                vector<string>& nowv = xMap[tmp.first];
                for (int j = 0; j < nowv.size(); ++j)
                {
                    if (q[i] == nowv[j]) continue;
                    string tmpName = nowv[j];
                    // cal distance
                    dis = hashMap[tmpName].second - tmp.second;
                    if (dis < 0) dis *= -1;
                    // update minimum
                    if (dis < nowmin)
                        nowmin = dis, res[i] = tmpName;
                    // confirm the smallest lexicographic name
                    else if (dis == nowmin)
                        res[i] = min(tmpName, res[i]);
                    else continue;
                }
            }
            // just like we did up here
            if (yMap.count(tmp.second))
            {
                vector<string>& nowv = yMap[tmp.second];
                for (int j = 0; j < nowv.size(); ++j)
                {
                    if (q[i] == nowv[j]) continue;
                    string tmpName = nowv[j];
                    dis = hashMap[tmpName].first - tmp.first;
                    if (dis < 0) dis *= -1;
                    if (dis < nowmin)
                        nowmin = dis, res[i] = tmpName;
                    else if (dis == nowmin)
                        res[i] = min(tmpName, res[i]);
                    else continue;
                }
            }
        }
        // 4. In the end, return result
        return res;
    }
};