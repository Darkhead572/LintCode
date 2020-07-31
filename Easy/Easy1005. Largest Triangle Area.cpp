/*

reqruirements

1005. Largest Triangle Area
You have a list of points in the plane. Return the area of the largest triangle that can be formed by any 3 of the points.

Example:

Input: points = [[0,0],[0,1],[1,0],[0,2],[2,0]]
Output: 2
Explanation: 
The five points are show in the figure below. The red triangle is the largest.


Example
3 <= points.length <= 50.
No points will be duplicated.
-50 <= points[i][j] <= 50.
Answers within 10^-6 of the true value will be accepted as correct.

Notice
3 <= points.length <= 50.
Points do not repeat.
-50 <= points[i][j] <= 50.
The result error is within 10 ^(-6) and can be considered correct.
*/

class Solution {
public:
    /**
     * @param points: List[List[int]]
     * @return: return a double
     */
    double calDis(const vector<int>& pa, const vector<int>& pb)
    {
        double dis = sqrt((pa[0] - pb[0]) * (pa[0] - pb[0]) + (pa[1] - pb[1]) * (pa[1] - pb[1]));
        return dis;
    }
    double calArea(const vector<int>& pa, const vector<int>& pb, const vector<int>& pc)
    {
        double a = calDis(pa, pb);
        double b = calDis(pa, pc);
        double c = calDis(pb, pc);
        if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
            return -1.0;
        double p = (a + b + c) / 2;
        double res = sqrt(p * (p - a) * (p - b) * (p - c));
        return res;
    }
    double largestTriangleArea(vector<vector<int>> &points) {
        // write your code here
        int m = points.size();
        double maximum = -1;
        for (int i = 0; i < m; ++i)
        for (int j = 0; j < m; ++j)
        for (int k = 0; k < m; ++k)
        {
            if (i == j || i == k || j == k)
                continue;
            double tmp = calArea(points[i], points[j], points[k]);
            if (tmp + 1.0 < 1e-6) continue;
            else maximum = max(maximum, tmp);
        }
        return maximum;
    }
};

//better solution

class Solution {
    /**
     * @param points: List[List[int]]
     * @return: return a double
     */
    // 由于点最多只有50个，直接枚举所有三角形即可.
    public:
    double largestTriangleArea(vector<vector<int>> &points) {
        double ans = 0.0; 
        for (int i = 0; i < points.size() - 2; i++) 
            for (int j = i + 1; j < points.size() - 1; j++) 
                for (int k = j + 1; k < points.size(); k++) 
                    ans = max(ans, areaCal(points[i], points[j], points[k])); 
        return ans; 
    }
     // 使用叉积计算三角形面积。
     double areaCal(vector<int> &pt1, vector<int> &pt2, vector<int>  &pt3) {
        return abs(pt1[0] * (pt2[1] - pt3[1]) + pt2[0] * (pt3[1] - pt1[1]) + pt3[0] * (pt1[1] - pt2[1])) / 2.0; 
    }
};