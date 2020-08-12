/*

requirements

1302. People Counting
The monthly salary of the employees of Xiaoming ’s company is xi yuan.
Now the boss of Xiaomin asksXiaomin several times, and every time he asks the boss, he will give an integer k. Xiaomin should quickly answer the number of employees whose boss' salary is equal to k.

Example
Example 1:

Input: wage = [6,2,1,2,6,2,5],ask = [6,5,8,2]
Output: [2,1,0,3]
Notice
1 \leq wage.size() \leq 800001≤wage.size()≤80000
1 \leq ask.size() \leq 1000001≤ask.size()≤100000
1 \leq wage[i] \leq 500,000,0001≤wage[i]≤500,000,000
*/

class Solution {
public:
    /**
     * @param wage: Salaries of all employees
     * @param ask: Number of inquiries
     * @return: Every time an answer is asked
     */
    vector<int> PeopleCounting(vector<int> &wage, vector<int> &ask) {
        // write your code here
        unordered_map<int, int> hashMap;
        for (int i = 0; i < wage.size(); ++i)
        {
            if (hashMap.count(wage[i]))
                ++hashMap[wage[i]];
            else hashMap[wage[i]] = 1;
        }
        vector<int> answer;
        for (int i = 0; i < ask.size(); ++i)
            answer.emplace_back(hashMap[ask[i]]);
        return answer;
    }
};