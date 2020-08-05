/*

requirements

737. Find Elements in Matrix
Given a matrix, find a element that appear in all the rows in the matrix.You can assume that there is only one such element.

Example
Example 1:

Input :
[
  [2,5,3],
  [3,2,1],
  [1,3,5]
]
Output : 3
*/

struct unit
{
public:
    explicit unit(int _index = 0, int _times = 0):index(_index), times(_times) {}
public:
    int index;
    int times;
};

class Solution {
public:
    /**
     * @param Matrix: the input
     * @return: the element which appears every row
     */
    int FindElements(vector<vector<int>> &Matrix) {
        // write your code here
        unordered_map<int, unit> hashMap;
        for (int i = 0; i < Matrix.size(); ++i)
        {
            for (int j = 0; j < Matrix[0].size(); ++j)
            {
                if (hashMap.count(Matrix[i][j]))
                {
                    if (hashMap[Matrix[i][j]].index == i)
                        continue;
                    else
                    {
                        hashMap[Matrix[i][j]].index = i;
                        ++hashMap[Matrix[i][j]].times;
                    }
                }
                else
                {
                    hashMap[Matrix[i][j]] = unit(i, 1);
                }
            }
        }
        for (auto &&elem: hashMap)
        {
            if (elem.second.times == Matrix.size())
                return elem.first;
        }
        return 0;
    }
};