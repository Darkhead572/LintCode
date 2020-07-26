/*

requirements

595. Binary Tree Longest Consecutive Sequence
Given a binary tree, find the length of the longest consecutive sequence path.

The path refers to any sequence of nodes from some starting node to any node in the tree along the parent-child connections. The longest consecutive path need to be from parent to child (cannot be the reverse).

Example
Example 1:

Input:
   1
    \
     3
    / \
   2   4
        \
         5
Output:3
Explanation:
Longest consecutive sequence path is 3-4-5, so return 3.
Example 2:

Input:
   2
    \
     3
    / 
   2    
  / 
 1
Output:2
Explanation:
Longest consecutive sequence path is 2-3,not 3-2-1, so return 2.
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
     * @param root: the root of binary tree
     * @return: the length of the longest consecutive sequence path
     */
    int longestConsecutive(TreeNode * root) {
        // write your code here
        return dfs(root, nullptr, 0);
    }
    int dfs(TreeNode* root, TreeNode* parent, int length) {
        if (root == nullptr) 
            return length;
        length = (parent != nullptr && root->val == parent->val + 1) ? length + 1 : 1;
        return max(length, max(dfs(root->left, root, length),
                            dfs(root->right, root, length)));
    }
};