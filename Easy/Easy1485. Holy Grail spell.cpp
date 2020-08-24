/*

requirements

1485. Holy Grail spell
In the world of the Grail, there is a hidden spell. The secret of this spell is the largest one of the uppercase and lowercase letters in English.
Now give you a piece of English. Can you find this letter?
ps:There must be an answer

Example
Example 1:

Input: "aAbb"
Output: A
Explanation: Because only lowercase b is not capitalized, and a has both uppercase and lowercase, a is the largest letter that satisfies the condition and is the only letter that satisfies the condition.
Example 2:

Input: "aabbBCcDd"
Output: D
Explanation: Because the three letters that satisfy the meaning of the question are 'b', 'c', 'd' where d is the largest, the answer is d
Notice
English length will not exceed 100,000
*/

class Solution {
public:
    /**
     * @param Spell: The Spell
     * @return: nothing
     */
    char holyGrailspell(string &Spell) {
        // Write your code here
        vector<int> f1(26, 0), f2(26, 0);
        char res;
        for (int i = 0; i < Spell.length(); ++i)
        {
            if(islower(Spell[i]))
                ++f1[Spell[i] - 97];
            else
                ++f2[Spell[i] - 65];
        }
        for (int i = 25; i >= 0; --i)
        {
            if (f1[i] != 0 && f2[i] != 0)
            {
                res = i + 'A';
                return res;
            }
        }
        return 0;
    }
};