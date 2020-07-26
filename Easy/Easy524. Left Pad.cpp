/*

requirements

524. Left Pad
You know what, left pad is javascript package and referenced by React:
Github link

One day his author unpublished it, then a lot of javascript projects in the world broken.

You can see from github it's only 11 lines.

You job is to implement the left pad function. If you do not know what left pad does, see examples below and guess.

Example
Example 1:

Input:
leftpad("foo", 5)
Output:
"  foo"
Example 2:

Input:
leftpad("foobar", 6)
Output:
"foobar"
Example 3:

Input:
leftpad("1", 2, "0")
Output:
"01"
Challenge
Use as little memory as possible
*/

class StringUtils {
public:
    /*
     * @param originalStr: the string we want to append to
     * @param size: the target length of the string
     * @param padChar: the character to pad to the left side of the string
     * @return: A string
     */
    static string leftPad(string &originalStr, int size, char padChar=' ') {
        // write your code here
        int m = originalStr.size();
        string res;
        if (m >= size)
        {
            //res = originalStr.substr(m - size);
            return originalStr;
        }
        else
        {
            res.append(size - m, padChar);
            res += originalStr;
            return res;
        }
    }
};