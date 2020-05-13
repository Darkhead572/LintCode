/*
67. Binary Tree Inorder Traversal
中文English
Given a binary tree, return the inorder traversal of its nodes' values.

Example
Example 1:

Input：{1,2,3}
Output：[2,1,3]
Explanation:
   1
  / \
 2   3
it will be serialized {1,2,3}
Inorder Traversal
Example 2:

Input：{1,#,2,3}
Output：[1,3,2]
Explanation:
1
 \
  2
 /
3
it will be serialized {1,#,2,3}
Inorder Traversal
Challenge
Can you do it without recursion?
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
     * @param root: A Tree
     * @return: Inorder in ArrayList which contains node values.
     */
    vector<int> result;
    vector<int> inorderTraversal(TreeNode * root) {
        // write your code here
        if(root == nullptr) {
            vector<int> tmp;
            return tmp;
        }
        inorderTraversal(root->left);
        result.push_back(root->val);
        inorderTraversal(root->right);
        return result;
    }
};
