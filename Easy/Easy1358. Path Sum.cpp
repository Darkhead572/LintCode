/*

requirements

1358. Path Sum
Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

Example
Example 1:

Input:tree = [5,4,8,11,#,13,4,7,2,#,#,#,#,#,1], sum = 22
Output: true
Explanation: Given the below binary tree
      5
     / \
    4   8
   /   / \
  11  13  4
 /  \      \
7    2      1
return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
Example 2:

Input:tree = [5,4,8], sum =18 
Output: false
Notice
A leaf is a node with no children.
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
    /**
     * @param root: the tree
     * @param sum: the sum
     * @return:  if the tree has a root-to-leaf path 
     */
    bool pathSum(TreeNode * root, int sum) {
        // Write your code here.
        return dfs(root, sum, 0);
    }
private:
    bool dfs(TreeNode * root, int sum, int tmp)
    {
        if (
            root->left == nullptr &&
            root->right == nullptr
            )
            return tmp + root->val == sum;
        bool l = false, r = false;
        if (root->left != nullptr)
            l = dfs(root->left, sum, tmp + root->val);
        if (root->right != nullptr)
            r = dfs(root->right, sum, tmp + root->val);
        return l || r;
    }
};