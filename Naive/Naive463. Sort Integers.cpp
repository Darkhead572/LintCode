class Solution {
public:
    /**
     * @param A: an integer array
     * @return: nothing
     */
    void sortIntegers(vector<int>& A) {
        // write your code here
        const int SIZE = A.size();
        for (int i = 1; i < SIZE; ++i)
            for (int j = 0; j < SIZE - i; ++j)
                if (A[j] > A[j + 1]) swap(A[j], A[j + 1]);
    }
};
