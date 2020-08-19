/*

requirements

1483. Maximum Average Score
Give the names of a group of students and their grades, find the highest average score(A student may have multiple scores of different course).

Example
Example 1:

Input:names = ["bob","ted","ted"]
grades=[88,100,20]
Output:88
Example 2:

Input: names = ["john","xisa","xisa","liajd","alice","john","xisa","mark","ted","xlisa"]
grades = [95,83,33,50,78,91,80,67,85,87]
Output:93
*/

struct unit {
public:
    // record the number of course
    int count = 0;
    int total = 0;
    unit() = default;
};

class Solution {
public:
    /**
     * @param names: the name
     * @param grades: the grade
     * @return: the maximum average score
     */
    double maximumAverageScore(vector<string> &names, vector<int> &grades) {
        // Write your code here
        unordered_map<string, unit> hashMap;
        for (size_t i = 0; i < names.size(); ++i)
        {
            if (hashMap.count(names[i]))
            {
                ++hashMap[names[i]].count;
                hashMap[names[i]].total += grades[i];
            }
            else
            {
                unit tmp; tmp.count = 1, tmp.total = grades[i];
                hashMap[names[i]] = tmp;
            }
        }
        double maximum = -1;
        for (auto && elem: hashMap)
        {
            maximum = max(maximum, elem.second.total / 1.0 / elem.second.count);
        }
        return maximum;
    }
};