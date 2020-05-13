/*
53. Reverse Words in a String
中文English
Given an input string, reverse the string word by word.

Example
Example 1:
	Input:  "the sky is blue"
	Output:  "blue is sky the"
	
	Explanation: 
	return a reverse the string word by word.

Example 2:
	Input:  "hello world"
	Output:  "world hello"
	
	Explanation: 
	return a reverse the string word by word.

Clarification
What constitutes a word?
A sequence of non-space characters constitutes a word and some words have punctuation at the end.
Could the input string contain leading or trailing spaces?
Yes. However, your reversed string should not contain leading or trailing spaces.
How about multiple spaces between two words?
Reduce them to a single space in the reversed string.
*/

class Solution {
public:
    /*
     * @param s: A string
     * @return: A string
     */
    string reverseWords(string &src) {
        // write your code here
        int m = src.length();
		if (!m) return src;
		stack<string> s;
		string* tmp;
		for (int i = 0; i < m; ++i)
		{
			if (isalpha(src[i]))
			{
				tmp = new string;
				while (isalpha(src[i]))
				{
					tmp->append(1, src[i]);
					++i;
				}
				while (i < m && !isalpha(src[i]) && src[i] != ' ')
				{
					tmp->append(1, src[i]);
					++i;
				}
				while (i < m && isalpha(src[i]))
				{
					tmp->append(1, src[i]);
					++i;
				}
				s.push(*tmp);
			}
		}
		string result;
		while (!s.empty())
		{
			result += s.top();
			//The last one do not append space
			if(s.size() - 1)
				result.append(1, ' ');
			s.pop();
		}
		return result;
	}
};
