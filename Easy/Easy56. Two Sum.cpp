/*
56. Two Sum
中文English
Given an array of integers, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are zero-based.

Example
Example1:
numbers=[2, 7, 11, 15], target=9
return [0, 1]
Example2:
numbers=[15, 2, 7, 11], target=9
return [1, 2]
Challenge
Either of the following solutions are acceptable:

O(n) Space, O(nlogn) Time
O(n) Space, O(n) Time
Notice
You may assume that each input would have exactly one solution
*/

class Solution {
public:
    /**
     * @param numbers: An array of Integer
     * @param target: target = numbers[index1] + numbers[index2]
     * @return: [index1, index2] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &numbers, int target) {
        // write your code here
        int m = numbers.size();
        vector<int> result;
        for(int i = 0; i < m; ++i)
        for(int j = 0; j < m; ++j)
        if(i != j&&numbers[i] + numbers[j] == target)
        {
            if(i > j) {
                result.push_back(j);
                result.push_back(i);
            }
            else{
                result.push_back(i);
                result.push_back(j);
            }
            return result;
        }
        return result;
    }
};

//challenge: use hashtable
/*
public class Solution {
    /**
     * @param numbers: An array of Integer
     * @param target: target = numbers[index1] + numbers[index2]
     * @return: [index1 + 1, index2 + 1] (index1 < index2)
     */
    public int[] twoSum(int[] numbers, int target) {
        // write your code here
        //解题思路是hash一下
        HashMap<Integer,Integer> maps=new HashMap<Integer,Integer>();
        for(int i=0;i<numbers.length;i++)
        {
        	maps.put(numbers[i],i);
        }
        int tmp=0;
        int result[]=new int[2];
        for(int i=0;i<numbers.length;i++)
        {
        	tmp=target-numbers[i];
        	if(maps.get(tmp)!=null)
        	{
        		result[0]=i;
        		result[1]=maps.get(tmp);
        		return result;
        	}
        }
        return result;
    }
}

————————————————
版权声明：本文为CSDN博主「Oeljeklaus」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/Oeljeklaus/article/details/80576073
*/
