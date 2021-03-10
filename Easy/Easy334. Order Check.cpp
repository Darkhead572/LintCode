/*
334. Order Check
students in a class are asked to stand in ascending oeder according to their heights for thr annual class photograph,determine the number of students not currently standing in their correct positions

Example
	Input:  heights = [1,1,3,3,4,1]
	Output: 3
	Explanation:  After sorting heights became to [1,1,1,3,3,4],Three students are not where they should be
Notice
1<= len(heights) <=10^51<=len(heights)<=10
​5
​​ 
1<= heights[i] <= 10^91<=heights[i]<=10
​9
*/

/*
334. 队列检查
班上的学生根据他们的年级照片的身高升序排列，确定当前未站在正确位置的学生人数

Example
	输入:  heights = [1,1,3,3,4,1]
	输出: 3
	解释:  经过排序后 heights变成了[1,1,1,3,3,4]，有三个学生不在应在的位置上
Notice
1<= len(heights) <=10^51<=len(heights)<=10
​5
​​ 
1<= heights[i] <= 10^91<=heights[i]<=10
​9
*/

class Solution {
public:
    /**
     * @param heights: Students height
     * @return: How many people are not where they should be
     */
    int orderCheck(vector<int> &heights) {
        // write your code here'
        vector<int> tmp = heights;
        sort(tmp.begin(), tmp.end());
        int result = 0;
        for (int i = 0; i < heights.size(); ++i)
            result += (heights[i] != tmp[i]);
        return result;
    }
};