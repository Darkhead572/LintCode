/*

requirements

757. Shortest Unordered Array
Given an array of integers, find the length of the shortest possible subsequence of integers that are unordered. A set of integers are said to be unordered if they are neither decreasing nor increasing.[Hint: start checking if it is increasing/decreasing and return 0, else check if an unordered triplet exists. If it does, return 3, else 0]

Example
Example 1:

Input：[1,2,3,4,5,6]
Output：0
Explanation：It is a increasing array.
Example 2:

Input：[1,2,1,2]
Output：3
Explanation：[1,2,1]
*/

class Solution {
public:
    /**
     * @param arr: an array of integers
     * @return: the length of the shortest possible subsequence of integers that are unordered
     */
    int shortestUnorderedArray(vector<int> &arr) {
        // write your code here
        int pre = -1, ans = 1, pos;
        if (arr.size() == 1)
           return 0; 
        
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] != arr[i - 1])
            {
                if (arr[i] < arr[i - 1])
                {
                    ans = -1, pos = i;
                    break;
                }
            }
        }
        for (int i = pos + 1; i < arr.size(); i++)
        {
            if (ans == -1)
            {
                if(arr[i] > arr[i - 1])
                    return 3;
            }
            else
            {
                if(arr[i] < arr[i - 1])
                    return 3;
            }
        }
        return 0;
    }
};