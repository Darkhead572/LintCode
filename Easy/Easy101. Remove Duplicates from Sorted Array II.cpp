/*
101. Remove Duplicates from Sorted Array II
中文English
Given a sorted array, remove the duplicates in place such that each element appear at most twice and return the new length.
If a number appears more than two times, then keep the number appears twice in array after remove.

Example
Example 1:
	Input: []
	Output: 0


Example 2:
	Input:  [1,1,1,2,2,3]
	Output: 5
	
	Explanation: 
	the length is 5: [1,1,2,2,3]

Notice
Need to operate in the original array
*/
class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        map<int, int> mapint;
        int m = nums.size();
        if(m == 0 || m == 1) return m;
        auto it2 = nums.begin();
        auto it1 = it2++;
        mapint.insert(pair<int, int>(*it1, 1));
        while(it2 < nums.end())
        {
            if(!mapint.count(*it2))
                mapint.insert(pair<int, int>(*it2, 1));
            else ++mapint[*it2];
            if(mapint[*it2] == 3) 
            {
                mapint[*it2] = 2;
                nums.erase(it2);
                it2 = it1;
                ++it2;
            }
            else 
            {
                ++it2;
                ++it1;
            }
        }
        return nums.size();
    }
};
