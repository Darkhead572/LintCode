/*
80. Median
中文English
Given a unsorted array with integers, find the median of it.

A median is the middle number of the array after it is sorted.

If there are even numbers in the array, return the N/2-th number after sorted.

Example
Example 1:

Input：[4, 5, 1, 2, 3]
Output：3
Explanation:
After sorting，[1,2,3,4,5]，the middle number is 3
Example 2:

Input：[7, 9, 4, 5]
Output：5
Explanation:
After sorting，[4,5,7,9]，the second(4/2) number is 5
Challenge
O(n) time.

Notice
The size of array is not exceed 10000
*/

//O(k + nlogn)≈O(nlogn)
class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: An integer denotes the middle number of the array
     */
    int median(vector<int> &nums) {
        // write your code here
        int m = nums.size();
        if(!m) return INT_MIN;
        if(m == 1) return nums[0];
        vector<int> tmp(nums);
        sort(tmp.begin(), tmp.end());
        if(m % 2) return tmp[m / 2];
        else return tmp[m / 2 - 1];
    }
};

//challenge: similar to the quick sort
/*
#include <iostream>
#include <stdlib.h>
 
using namespace std;
 
int selection(int data[], int n, int k);
 
int main()
{
	int data[9];
	int n = 9;
 
	//随机生成数组元素值
	for (int i = 0; i < n; ++i)
	{
		data[i] = rand();
		cout << data[i] << ' ';
	}
	cout << endl;
 
	if (n & 1)	//如果有奇数个元素
	{
		cout << selection(data, n, n / 2) << endl;
	}
	else    //如果有偶数个元素
	{
		cout << (double(selection(data, n, n / 2) + selection(data, n, n / 2 - 1)) / 2) << endl;
	}
 
	return 0;
}
 
int selection(int data[], int n, int k)		//data是要查找的数组，n是数组的大小，k是中位数应该在的位置
{
	//基准值
	int pivot = data[k];
 
	//对小于基准值、等于基准值、大于基准值的元素进行划分
	int sl = 0, sv = 0, sr = 0;
	int SL[10], SV[10], SR[10];
	for (int i = 0; i < n; ++i)
	{
		if (data[i] < pivot)
		{
			SL[sl] = data[i];
			++sl;
		}
		else if (data[i] == pivot)
		{
			SV[sv] = data[i];
			++sv;
		}
		else
		{
			SR[sr] = data[i];
			++sr;
		}
	}
 
	//比较k与子集所含元素大小的关系
	if (k < sl)
	{
		selection(SL, sl, k);
	}
	else if (k < sv+sl)
	{
		return data[k];
	}
	else
	{
		selection(SR, sr, k - sl - sv);
	}
}
————————————————
版权声明：本文为CSDN博主「t11383」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/t11383/article/details/88695662
*/
