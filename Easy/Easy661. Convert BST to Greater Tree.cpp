/*

requirements

661. Convert BST to Greater Tree
Given a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus sum of all keys greater than the original key in BST.

Example
Example 1:

Input : {5,2,13}
              5
            /   \
           2     13
Output : {18,20,13}
             18
            /   \
          20     13
Example 2:

Input : {5,3,15}
              5
            /   \
           3     15
Output : {20,23,15}
             20
            /   \
          23     15

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
private:
    void dfs(TreeNode* root)
    {
        if (root == nullptr)
            return;
        dfs(root->right);
        sum += root->val, root->val = sum;
        dfs(root->left);
    }
public:
    /**
     * @param root: the root of binary tree
     * @return: the new root
     */
    TreeNode * convertBST(TreeNode * root) {
        // write your code here
        sum = 0; dfs(root);
        return root;
    }
private:
    int sum;
};