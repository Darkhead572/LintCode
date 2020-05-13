class Solution {
public:
    /**
     * @param n: an integer
     * @return: an ineger f(n)
     */
    int fibonacci(int n) {
        // write your code here
        int n1 = 0;
        int n2 = 1;
        int temp = 0;
        if (n == 1) return 0;
        for (int i = 1; i < n; ++i)
        {
            temp = n1 + n2;
            n1 = n2;
            n2 = temp;
        }
        return n1;
    }
};
