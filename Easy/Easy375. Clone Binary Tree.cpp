/*

requirements

375. Clone Binary Tree
For the given binary tree, return a deep copy of it.

Example
Example 1:

Input: {1,2,3,4,5}
Output: {1,2,3,4,5}
Explanation:
The binary tree is look like this:
     1
   /  \
  2    3
 / \
4   5
Example 2:

Input: {1,2,3}
Output: {1,2,3}
Explanation:
The binary tree is look like this:
   1
 /  \
2    3
Notice
You'd better not just return root to solve the problem.
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
     * @param root: The root of binary tree
     * @return: root of new tree
     */
    TreeNode * cloneTree(TreeNode * root) {
        // write your code here
        if(root == nullptr)
            return nullptr;
        auto cur = new TreeNode(root->val);
        cur->left = cloneTree(root->left);
        cur->right = cloneTree(root->right);
        return cur;
    }
};