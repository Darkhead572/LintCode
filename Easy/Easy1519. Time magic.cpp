/*

requirements

1519. Time magic
In Hogwarts School of Magic, there is a simple time magic that converts the current time to the maximum time, but only a few fixed positions. The longest time is 23:59 and the shortest time is 00:00. The format of the time is hh:mm
For example: now is "2?:2?", then the maximum time that can be converted is "23:29"

Example
Example 1:

Input:  "?4:5?"
Output: "14:59"
Explanation: Return maximum time.
Example 2:

Input:  "0?:??"
Output: "09:59"
Explanation: Return maximum time.
*/

class Solution {
public:
    /**
     * @param newTime: new time
     * @return: maximum time
     */
    string timeMagic(string &newTime) {
        // If hh == "??", then hh = "23"
        if (newTime[0] == '?' && newTime[1] == '?')
        {
            newTime[0] = '2';
            newTime[1] = '3';
        } 
        else if (newTime[0] == '?')
        {
            // If hh == "?5", then hh = "15"
            if (newTime[1] > '3')
            {
                newTime[0] = '1';
            } 
            // If hh == "?3", then hh = "23"
            else newTime[0] = '2';
        } 
        else if (newTime[1] == '?')
        {
            // If hh == "2?", then hh = "23"
            if (newTime[0] == '2')
                newTime[1] = '3';
            // If hh == "0?", then hh = "09"
            else newTime[1] = '9';
        }
        
        // If mm == "??", then mm = "59"
        if (newTime[3] == '?' && newTime[4] == '?')
        {
            newTime[3] = '5';
            newTime[4] = '9';
        } 
        // If mm == "?6", then mm = "56"
        else if (newTime[3] == '?' )
            newTime[3] = '5';
        // If mm == "3?", then mm = "39"
        else if (newTime[4] == '?' )
            newTime[4] = '9';
        
        return newTime;
    }
};