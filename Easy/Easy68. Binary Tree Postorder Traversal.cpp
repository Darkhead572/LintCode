/*
68. Binary Tree Postorder Traversal
中文English
Given a binary tree, return the postorder traversal of its nodes' values.

Example
Example 1:

Input：{1,2,3}
Output：[2,3,1]
Explanation:  
   1
  / \
 2   3
 it will be serialized {1,2,3}
Post order traversal
Example 2:

Input：{1,#,2,3}
Output：[3,2,1]
Explanation:  
1
 \
  2
 /
3
it will be serialized {1,#,2,3}
Post order traversal
Challenge
Can you do it without recursion?

Notice
The first data is the root node, followed by the value of the left and right son nodes, and "#" indicates that there is no child node.
The number of nodes does not exceed 20.
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
     * @return: Postorder in ArrayList which contains node values.
     */
    vector<int> result;
    vector<int> postorderTraversal(TreeNode * root) {
        // write your code here
        if(root == nullptr) {
            vector<int> tmp;
            return tmp;
        }
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        result.push_back(root->val);
        return result;
    }
};
