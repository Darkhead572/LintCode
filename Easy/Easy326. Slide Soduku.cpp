/*

requirements

326. Slide Soduku
You are given a 3\times n3×n matrix number which contains only digits from 1 to 9.
Consider a sliding window of size 3\times 33×3 which is sliding from left to right through the matrix number,
The sliding window has n-2 positions when sliding through the initial matrix

Your task is to find whether or not each sliding window position contains all the numbers for 1 to 9 (inclusive).
Return an array of length n-2, where the i^ {th}i
​th
​​  element is true if i^ {th}i
​th
​​  state of the sliding window contains all numbers from 1 to 9, and false otherwise.

Example
Input:[[1,2,3,2,5,7],[4,5,6,1,7,6],[7,8,9,4,8,3]]
Output:[true,false,true,false]
Explanation:the first and third sliding windows contain all the numbers for 1 to 9 ，but the others sliding windows don't contain all the numbers for 1 to 9

Notice
3 \leq n \leq 10^53≤n≤10
​5
​​
*/

class Solution {
public:
    /**
     * @param number: an only contains from 1 to 9 array
     * @return: return  whether or not each sliding window position contains all the numbers for 1 to 9 
     */
    vector<bool> SlidingWindows(vector<vector<int>> &number) {
        // write your code here
        int m = number[0].size();
        vector<bool> res(m - 2, false);
        for (int i = 2; i < m; ++i)
        {
            res[i - 2] = check(number, i);
        }
        return res;
    }
private:
    bool check(const vector<vector<int>> &number, const int& j)
    {
        vector<bool> visited(9, false);
        for (int i = 0; i < 3; ++i)
        {
            if (number[i][j - 2] >= 1 && number[i][j - 2] <= 9)
                visited[number[i][j - 2] - 1] = true;
            if (number[i][j - 1] >= 1 && number[i][j - 1] <= 9)
                visited[number[i][j - 1] - 1] = true;
            if (number[i][j] >= 1 && number[i][j] <= 9)
                visited[number[i][j] - 1] = true;
        }
        for (bool && elem: visited)
            if (!elem) return false;
        return true;
    }
};