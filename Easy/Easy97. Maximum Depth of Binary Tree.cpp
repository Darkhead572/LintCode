/*
97. Maximum Depth of Binary Tree
中文English
Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Example
Example 1:

Input: tree = {}
Output: 0
Explanation: The height of empty tree is 0.
Example 2:

Input: tree = {1,2,3,#,#,4,5}
Output: 3	
Explanation: Like this:
   1
  / \                
 2   3                
    / \                
   4   5
it will be serialized {1,2,3,#,#,4,5}
Notice
The answer will not exceed 5000
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
     * @param root: The root of binary tree.
     * @return: An integer
     */
    int maxDepth(TreeNode * root) {
        // write your code here
        if(root == nullptr) return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return left > right? left + 1: right + 1;
    }
};
