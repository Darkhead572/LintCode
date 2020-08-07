/*

requirements

1902. Find Google
Give you a C ++ file in string form(each line is a string),we want you to find "Google" in the comment line.If there is "Google" in the comment line,return true,else return false.
C ++ has two kinds of comments, one is //, which means that the contents of this line after // is comment, and the other is between /* and */ are comments.

Example
Input: S = ["#include<bits/stdc++.h>","using namespace std;","//Google test","int main(){","return 0;","}"]
Output: true
Input: S = ["#include<bits/stdc++.h>","using namespace std;","int main(){","int Gogle = 0","return 0;","}"]
Output: false
Explanation: The google is not in commet line.
Notice
Ensure that the "Google" string is in a string and will not wrap
*/

class Solution {
public:
    /**
     * @param S: The c++ file
     * @return: return if there is "Google" in commet line
     */
    bool FindGoogle(vector<string> &S) {
        // Write your code here.
        bool type1 = false; // annotation type "/*" "*/"
        bool type2 = false; // annotation type "//"
        for(size_t i = 0; i < S.size(); ++i)
        {
            for(size_t j = 0; j < S[i].length() - 1; ++j)
            {
                if(S[i].substr(j, 2) == "//")
                    type2 = true;
                if(S[i].substr(j, 2) == "/*" && !type2)
                    type1 = true;
                if(S[i].substr(j, 2) == "*/" && !type2)
                    type1 = false;
                if(j + 5 < S[i].length() && S[i].substr(j, 6) == "Google" && (type1 | type2))
                    return true;
            }
            type2 = false;
        }
        return false;
    }
};