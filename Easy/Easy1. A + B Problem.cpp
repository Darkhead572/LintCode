class Solution {
public:
    /**
     * @param a: An integer
     * @param b: An integer
     * @return: The sum of a and b 
     */
    int aplusb(int a, int b) {
    // write your code here
    //this code is written by the others, not me
    if (a==0)
	return b;
    if (b==0)
	return a;
    int p1=a&b;
    int p2=a^b;
    p1=p1<<1;
    return aplusb(p2,p1);
    }
};
