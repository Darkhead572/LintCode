/*
39. Recover Rotated Sorted Array
中文English
Given a rotated sorted array, recover it to sorted array in-place.（Ascending）

Example
Example1:
[4, 5, 1, 2, 3] -> [1, 2, 3, 4, 5]
Example2:
[6,8,9,1,2] -> [1,2,6,8,9]

Challenge
In-place, O(1) extra space and O(n) time.

Clarification
What is rotated array?

For example, the orginal array is [1,2,3,4], The rotated array of it can be [1,2,3,4], [2,3,4,1], [3,4,1,2], [4,1,2,3]
*/

//challenge:O(1), O(logn)
class Solution {
public:
    /**
     * @param nums: An integer array
     * @return: nothing
     */
    void recoverRotatedSortedArray(vector<int> &nums) {
        // write your code here
        sort(nums.begin(), nums.end());
    }
};

from CSDN
/*
题目描述：

给定一个旋转排序数组，在原地恢复其排序。


什么是旋转数组？


比如，原始数组为[1,2,3,4], 则其旋转数组可以是[1,2,3,4], [2,3,4,1], [3,4,1,2], [4,1,2,3]
挑战：使用O(1)的额外空间和O(n)时间复杂度

思路：

一、直接多次循环

二、假设1前面有k个数,找到1的位置后, 将其前面的k个数增加到数组末尾,然后数据统一前移一次,再去除后面的k个位置

三、(也是代码中采用的方法)

三步翻转法：以{4,5,6,7,1,2,3}为例

1.  先找到1的位置.然后翻转{4,5,6,7}得到{7,6,5,4}

2. 翻转{1,2,3}得到{3,2,1}

3. 此时数组为：{7,6,5,4,3,2,1}, 将其翻转即得{1,2,3,4,5,6,7}



代码：

class Solution {
public:
    void recoverRotatedSortedArray(vector<int> &nums) {
        // write your code here
        int pos = 1, len = nums.size();
        for(;(pos < len) && (nums[pos] >= nums[pos-1]); ++pos);//注意'='号
        if(pos == len)// 若已经是原始排序,则返回
            return;
        rotateArray(nums, 0, pos);
        rotateArray(nums, pos, len);
        rotateArray(nums, 0, len);
    }
    void rotateArray(vector<int> &nums, int begin, int end){
        for(int i = begin, j = end - 1; i < j; ++i, --j)
            swap(nums[i], nums[j]);
    }
};

————————————————
版权声明：本文为CSDN博主「ShawGrower」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/github_34248245/article/details/50900004
*/
