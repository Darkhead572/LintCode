/*

requirements

172. Remove Element
中文English
Given an array and a value, remove all occurrences of that value in place and return the new length.

The order of elements can be changed, and the elements after the new length don't matter.
样例
Example 1:
	Input: [], value = 0
	Output: 0


Example 2:
	Input:  [0,4,4,0,0,2,4,4], value = 4
	Output: 4
	
	Explanation: 
	the array after remove is [0,0,0,2]
*/

class Solution {
public:
    /*
     * @param A: A list of integers
     * @param elem: An integer
     * @return: The new length after remove
     */
    int removeElement(vector<int> &A, int elem) {
        // write your code here
        if(!A.size())
            return 0;
        int i = 0;
        while(i < A.size())
        {
            if(A[i] == elem)
            {
                for(int j = i; j < A.size() - 1; ++j)
                {
                    swap(A[j], A[j + 1]);
                }
                A.pop_back();
            }
            else ++i;
        }
        return A.size();
    }
};