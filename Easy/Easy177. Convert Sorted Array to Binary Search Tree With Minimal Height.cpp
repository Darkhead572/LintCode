/*

requirements

177. Convert Sorted Array to Binary Search Tree With Minimal Height.
Given a sorted (increasing order) array, Convert it to create a binary search tree with minimal height.

样例
Example 1:

Input: []
Output:  {}
Explanation: The binary search tree is null
Example 2:

Input: [1,2,3,4,5,6,7]
Output:  {4,2,6,1,3,5,7}
Explanation:
A binary search tree with minimal height.

         4
       /   \
      2     6
     / \    / \
    1   3  5   7


注意事项
There may exist multiple valid solutions, return any of them.
*/

/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param A: an integer array
     * @return: A tree node
     */
    TreeNode *sortedArrayToBST(vector<int> &A) {
        // write your code here
        if (A.size() == 0)
            return nullptr;
        int len = A.size();
        return buildTree(A, 0, len-1);
    }
    TreeNode *buildTree(vector<int> &A, int start, int end) {
        if (start > end) return nullptr;
        int mid = start + (end - start)/2;

        TreeNode *root = new TreeNode(A[mid]);
        root->left = buildTree(A, start, mid-1);
        root->right = buildTree(A, mid+1, end);
        return root;
    }
};