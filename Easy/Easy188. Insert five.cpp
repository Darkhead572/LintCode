/*

requirements

188. Insert five

Given a number, insert a 5 at any position of the number to make the number after insertion the largest

样例
Example 1:

Input:  a = 234
Output: 5234
注意事项
|a| <= 10^6
*/

class Solution {
public:
    /**
     * @param a: A number
     * @return: Returns the maximum number after insertion
     */
    int InsertFive(int a) {
        // write your code here
        string tmp = to_string(a);
        bool tag = false;
        for (int i = 0; i < tmp.length(); ++i)
        {
            if (tmp[i] == '-')
            {
                tag = true;
            }
            else if (!tag && tmp[i] <= '5')
            {
                tmp.insert(i, "5");
                break;
            }
            else if (tag && tmp[i] >= '5')
            {
                tmp.insert(i, "5");
                break;
            }
            else continue;
        }
        return stoi(tmp);
    }
};