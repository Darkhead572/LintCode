class Solution {
public:
    /*
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
    long long trailingZeros(long long n) {
    // write your code here, try to do it without arithmetic operators.
    long long num = 0;
    while(n)
    {
        num += n / 5;
        n = n / 5;
    }
        return num;
    }
};

/*
------original version------
time exceeded!
class Solution {
public:
    /*
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
    long long trailingZeros(long long n) {
    // write your code here, try to do it without arithmetic operators.
    int count = 0;
    int j = 0;
    for (int i = 1; i <= n; i++) {
        j = i;
        while (j % 5 == 0) {
            //to count number of 5
            ++count;
            j = j / 5;
        }
    }
    return count;
    }
};
*/
