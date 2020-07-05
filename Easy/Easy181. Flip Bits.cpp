/*

requirements

181. Flip Bits
Determine the number of bits required to flip if you want to convert integer n to integer m.

Example 1:
	Input: n = 31, m = 14
	Output:  2
	
	Explanation:
	(11111) -> (01110) there are two different bits.


Example 2:
	Input: n = 1, m = 7
	Output:  2
	
	Explanation:
	(001) -> (111) will change two bits.
	
注意事项
Both n and m are 32-bit integers.
*/

class Solution {
public:
    /**
     * @param a: An integer
     * @param b: An integer
     * @return: An integer
     */
    int bitSwapRequired(int a, int b) {
        // write your code here
        int c = a ^ b;
        int count = 0;
        while (c) 
        {
            count++;
            c &= (c - 1);
        }
        return count;
    }
};