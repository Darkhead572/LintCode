/*

requirements

445. Cosine Similarity
Cosine similarity is a measure of similarity between two vectors of an inner product space that measures the cosine of the angle between them. The cosine of 0° is 1, and it is less than 1 for any other angle.

See Wiki: Cosine Similarity

Here is the formula:

cosine-similarity

Given two vectors A and B with the same size, calculate the cosine similarity.

Return 2.0000 if cosine similarity is invalid (for example A = [0] and B = [0]).

Example
Example 1:

Input: A = [1,4,0], B = [1,2,3]
Output: 0.5834
Example 2:

Input: A = [1], B = [2]
Output: 1.0000
*/

class Solution {
public:
    /*
     * @param A: An integer array
     * @param B: An integer array
     * @return: Cosine similarity
     */
    double cosineSimilarity(vector<int> &A, vector<int> &B) {
        // write your code here
        if (A.empty() && B.empty())
            return 2.0;
        double res = 0.0;
        double sum = 0.0;
        double moduleA = 0.0;
        double moduleB = 0.0;
        for(int i = 0; i < A.size(); ++i)
        {
            sum += A[i] * B[i];
            moduleA += A[i] * A[i];
            moduleB += B[i] * B[i];
        }
        moduleA = sqrt(moduleA);
        moduleB = sqrt(moduleB);
        if(moduleA == 0 || moduleB == 0)
            return 2.0;
        res = sum / moduleB / moduleA;
        return res;
    }
};