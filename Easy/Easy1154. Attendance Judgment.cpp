/*

requirements

1154. Attendance Judgment
Given A string representing a student's attendance, 'A' stands for attendance, 'D' for default, and 'L' for lateness. If the student is default for two and more times or he is late for three and more consecutive times, he should be punished. Please judge whether the student should be punished or not and return a Boolean type.

Example
Input1: "AADALLLAD"
Output1: true
Explanation1: The student was default twice and was late three times in a row, so he should be punished.

Input2: "AADALLLA"
Output2: true
Explanation2: The student was only default once, but he was late three times in a row, so he should be punished.

Input3: "AADALLAAL"
Output3: false
Explanation3: The student was only default once and he was just late two times in a row at most, so he should not be punished.

Notice
The string contains only 'A ',' D' and 'L' three types uppercase letters.
The string length does not exceed 10000.


*/

class Solution {
public:
    /**
     * @param record: Attendance record.
     * @return: If the student should be punished return true, else return false. 
     */
    bool judge(string &record) {
        // Write your code here.
        string lateness = "LLL";
        int count = 0, pos = record.find(lateness);
        for (int i = 0; i < record.size(); ++i)
        {
            if (record[i] == 'D') ++count;
        }
        return count >= 2 || pos != -1;
    }
};