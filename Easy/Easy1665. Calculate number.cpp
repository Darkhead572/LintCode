/*

requirements

1665. Calculate number
Given a decimal number num, now you need to convert it to a binary number and return the sum of 1 and the every position of 1
.

Example
Example 1:

Input: 10,
Output: [2,1,3]
Explanation:10 is converted to binary 1010, there are 2 1 in total, so the first one is 2, the position of 1 is the first and the third, so the following two numbers are 1, 3.
Example 1:

Input: 7,
Output: [3,1,2,3]
Explanation:7 is converted to binary 111, there are 3 1 in total, so the first one is 3, the position of 1 is the first, second and the third, so the following three numbers are 1, 2, 3.
Notice
n<=10^9
*/

class Solution {
public:
    /**
     * @param num: the num
     * @return: the array subject to the description
     */
    /*
    vector<int> calculateNumber(int num) {
        // Write your code here.
        string number; int cnt = 0;
        vector<int> res;
        while (num)
        {
            number = char(num % 2 + 48) + number;
            num /= 2;
        }
        for (size_t i = 0; i < number.length(); ++i)
        {
            if (number[i] == '1')
                ++cnt, res.push_back(i + 1);
        }
        res.insert(res.begin(), cnt);
        return res;
    }
    */
    //better solution
    vector<int> calculateNumber(int num) {
        vector<int> list;
        int pos = 0;
        int cnt = 0;
        while (num)
        {
            if (num % 2)
                ++cnt, list.push_back(pos);
            ++pos, num /= 2;
        }
        vector<int> res(cnt + 1, 0);
        res[0] = cnt;
        for (int i = cnt - 1; i >= 0; --i) 
            res[cnt - i] = pos - list[i];
        return res;
    }
};