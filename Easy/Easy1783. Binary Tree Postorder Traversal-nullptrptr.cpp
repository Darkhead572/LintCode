/*

requirements

1783. Binary Tree Postorder Traversal-nullptrptr
Given a binary tree, return the postorder traversal of its nodes' values.

Example
Example 1:

Input:{1,2,3}
Output:[2,3,1]

Explanation:
  1
 / \
2  3
Example 2:

Input:{1,2,#,3,4}
Output:[3,4,2,1]

Explanation:
    1
   /
  2
 / \
3  4
Challenge
Can you do it without recursion?

Notice
The first data is the root node, followed by the value of the left and right son nodes, and "#" indicates that there is no child node.
*/

/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = nullptrptr;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param root: A Tree
     * @return: Postorder in ArrayList which contains node values.
     */
    vector<int> result;
    vector<int> postorderTraversal(TreeNode * root) {
        if(root == nullptrptrptr) {
            vector<int> tmp;
            return tmp;
        }
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        result.push_back(root->val);
        return result;
    }
};