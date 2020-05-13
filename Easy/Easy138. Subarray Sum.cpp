/*

requirements
138. Subarray Sum
中文English
Given an integer array, find a subarray where the sum of numbers is zero. Your code should return the index of the first number and the index of the last number.

Example
Example 1:

Input:  [-3, 1, 2, -3, 4]
Output: [0, 2] or [1, 3].
Explanation: return anyone that the sum is 0.
Example 2:

Input:  [-3, 1, -4, 2, -3, 4]
Output: [1,5]	
Notice
There is at least one subarray that it's sum equals to zero.

*/

class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number and the index of the last number
     */
    vector<int> subarraySum(vector<int> &nums) {
        // write your code here
        vector<int> result;
    	map<int, int> ret;
    	ret.insert(pair<int,int>(0, -1));
	    int len = nums.size();
    	int sum = 0;
    	for (int i = 0; i < len; ++i)
    	{
		    sum += nums[i];
		    // 若sum的值重复出现, 则其中间的值定为0
		    if (ret.find(sum) != ret.end()){
			    result.push_back(ret[sum] + 1);
			    result.push_back(i);
			    return result;
		    }
		    ret[sum] = i;
	    }
	    return result;
    }
};

/*Time Exceeded! O(n^3)
class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number and the index of the last number
     */
    vector<int> subarraySum(vector<int> &nums) {
        // write your code here
        int m = nums.size();
        vector<int> res;
        
        if(!m) return res;
        int i = 0, j = 0;
        int currentsum = 0;
        for(i = 0; i < m; ++i)
        {
            currentsum = nums[i];
            for(j = i + 1; j < m; ++j)
            {
                if(!currentsum) break;
                currentsum += nums[i + j];
            }
        }
        res.push_back(i);
        res.push_back(j - 1);
        return res;
    }
};
*/