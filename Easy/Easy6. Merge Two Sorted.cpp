class Solution {
public:
    /**
     * @param A: sorted integer array A
     * @param B: sorted integer array B
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        int m = A.size();
        int n = B.size();
        vector<int> C;
        int i = 0, j = 0;
        while(i < m) C.push_back(A[i++]);
        while(j < n) C.push_back(B[j++]);
        sort(C.begin(), C.end());
        return C;
    }
};
