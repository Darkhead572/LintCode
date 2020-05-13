/*
9. Fizz Buzz
中文English
Given number n. Print number from 1 to n. But:

when number is divided by 3, print "fizz".
when number is divided by 5, print "buzz".
when number is divided by both 3 and 5, print "fizz buzz".
when number can't be divided by either 3 or 5, print the number itself.
Example
If n = 15, you should return:
[
  "1", "2", "fizz",
  "4", "buzz", "fizz",
  "7", "8", "fizz",
  "buzz", "11", "fizz",
  "13", "14", "fizz buzz"
]

If n = 10, you should return:
[
  "1", "2", "fizz",
  "4", "buzz", "fizz",
  "7", "8", "fizz",
  "buzz"
]
Challenge
Can you do it with only one if statement?
*/

class Solution {
public:
    /**
     * @param n: An integer
     * @return: A list of strings.
     */
    vector<string> fizzBuzz(int n) {
        // write your code here
        vector<string> a;
        string temp;
        for(int i = 1;i <= n;++i)
        {
            if(!(i % 3)&&!(i % 5))
            {
                temp = "fizz buzz";
                a.push_back(temp);
            }
            else if(!(i % 3))
            {
                temp = "fizz";
                a.push_back(temp);
            }
            else if(!(i % 5))
            {
                 temp = "buzz";
                a.push_back(temp);
            }
            else
            {
                temp = to_string(i);
                a.push_back(temp);
            }
        }
        return a;
    }
};

/*challenge
class Solution {
public:
    /**
     * @param n: An integer
     * @return: A list of strings.
     */
    vector<string> fizzBuzz(int n) {
        // write your code here
        vector<string> a;
        string b[15] = {"fizz buzz","","","fizz","","buzz",
        "fizz","","","fizz","buzz","","fizz","",""};
        for(int i = 1;i <= n;++i)
        {
            if(!b[i%15].length())
            {
                a.push_back(to_string(i));
                continue;
            }
            a.push_back(b[i%15]);
        }
        return a;
    }
};
*/
