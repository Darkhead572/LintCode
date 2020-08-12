/*

requirements

1200. Relative Ranks
Given scores of N athletes, find their relative ranks and the people with the top three highest scores, who will be awarded medals: "Gold Medal", "Silver Medal" and "Bronze Medal".

Example
Example 1:

Input: [5, 4, 3, 2, 1]
Output: ["Gold Medal", "Silver Medal", "Bronze Medal", "4", "5"]
Explanation: The first three athletes got the top three highest scores, so they got "Gold Medal", "Silver Medal" and "Bronze Medal". 
For the right two athletes, you just need to output their relative ranks according to their scores.
Notice
N is a positive integer and won't exceed 10,000.
All the scores of athletes are guaranteed to be unique.
*/

struct unit
{
public:
    int score;
    int index;
public:
    explicit unit(int _score = 0, int _index = 0): score(_score), index(_index) {}
    // non-member function cannot have cv-qualifier(const/volatile)
    friend bool operator<(const unit& a, const unit& b)
    {
        return a.score < b.score;
    }
};

class Solution {
public:
    /**
     * @param nums: List[int]
     * @return: return List[str]
     */
    vector<string> findRelativeRanks(vector<int> &nums) {
        // write your code here
        set<unit> mySet;
        for (int i = 0; i < nums.size(); ++i)
            mySet.insert(unit(nums[i], i));
        vector<string> res(nums.size(), ""); int cnt = 0;
        for (auto it = mySet.rbegin(); it != mySet.rend(); ++it, ++cnt)
        {
            switch(cnt)
            {
                case 0: res[it->index] = "Gold Medal"; break;
                case 1: res[it->index] = "Silver Medal"; break;
                case 2: res[it->index] = "Bronze Medal"; break;
                default: res[it->index] = to_string(cnt + 1); break;
            }
        }
        return res;
    }
};