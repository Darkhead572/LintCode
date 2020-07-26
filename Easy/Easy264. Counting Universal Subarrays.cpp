/*

264. Counting Universal Subarrays

You will be given an array comprised of '2's or '4's. A subarray (A subarray is a group of contiguous elements in an array and cannot be empty) of such an array is called " universal" if it matches the following conditions:

The 2's and 4's are grouped consecutively (e.g., [4, 2],[2, 4],[4, 4, 2, 2],[2, 2, 4, 4],[4, 4, 4, 2, 2, 2], etc.).
The number of 4's in the subarray is equal to the number of 2's in the subarray.
Subarrays with the same element but different positions are treated differently. For example, there are two [4, 2] subarrays in array[4, 2, 4, 2].
You need to return an integer value, the number of "universal" subarrays in a given array.

1 ≤ |array| ≤ 10^5
array[i] ∈ (2, 4)

样例
Sample 1:
Input sample: array = [4, 4, 2, 2, 4, 2]
Output sample: 4
Sample explanation: The 4 subarrays that match these two criteria are: [4, 4, 2, 2]，[4,2]，[2,4]，[4,2]. Note that there are two subarrays [4,2], in indexes 1-2 and 4-5, respectively.

Sample 2:
Input sample: array = [4, 4]
Output sample: 0
Sample explanation: the given array does not have 2, certainly cannot satisfy the condition two, so the result is 0.
*/

class Solution {
public:
    /**
     * @param array: An given array.
     * @return: Return the number of "universal" subarrays.
     */
    int subarrays(vector<int> &array) {
        // write your code here.
        vector<int> count;
		int cnt = 0, i = 0;
		while (i < array.size())
		{
			while (i < array.size() && array[i] == 2)
			{
				++cnt;
				++i;
			}
			if (cnt)
			{
				count.push_back(cnt);
				cnt = 0;
			}
			while (i < array.size() && array[i] == 4)
			{
				++cnt;
				++i;
			}
			if (cnt)
			{
				count.push_back(cnt);
				cnt = 0;
			}
		}
		int sum = 0;
		for (int i = 0; i < count.size() - 1; ++i)
		{
			sum += min(count[i], count[i + 1]);
		}
		return sum;
    }
};