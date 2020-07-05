/*

requirements

212. Space Replacement
Write a method to replace all spaces in a string with %20. The string is given in a characters array, you can assume it has enough space for replacement and you are given the true length of the string.

You code should also return the new length of the string after replacement.

样例
Example 1:

Input: string[] = "Mr John Smith" and length = 13
Output: string[] = "Mr%20John%20Smith" and return 17
Explanation:
The string after replacement should be "Mr%20John%20Smith", you need to change the string in-place and return the new length 17.
Example 2:

Input: string[] = "LintCode and Jiuzhang" and length = 21
Output: string[] = "LintCode%20and%20Jiuzhang" and return 25
Explanation:
The string after replacement should be "LintCode%20and%20Jiuzhang", you need to change the string in-place and return the new length 25.
挑战
Do it in-place.

注意事项
If you are using Java or Python，please use characters array instead of string.
*/

class Solution {
public:
    /*
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
    int replaceBlank(char string[], int length) {
        // write your code here
        for(int i = 0; i < length; ++i)
        {
            if(string[i] == ' ')
            {
                for(int j = length - 1; j != i; --j)
                {
                    //move backward 2 spaces
                    string[j + 2] = string[j];
                }
                length += 2;
                string[i] = '%';
                string[i + 1] = '2';
                string[i + 2] = '0';
            }
            else continue;
        }
        return length;
    }
};