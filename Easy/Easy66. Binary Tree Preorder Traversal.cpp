/*
66. Binary Tree Preorder Traversal
中文English
Given a binary tree, return the preorder traversal of its nodes' values.

Example
Example 1:

Input：{1,2,3}
Output：[1,2,3]
Explanation:
   1
  / \
 2   3
it will be serialized {1,2,3}
Preorder traversal
Example 2:

Input：{1,#,2,3}
Output：[1,2,3]
Explanation:
1
 \
  2
 /
3
it will be serialized {1,#,2,3}
Preorder traversal
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
     * @return: Preorder in ArrayList which contains node values.
     */
    vector<int> result;
    vector<int> preorderTraversal(TreeNode * root) {
        // write your code here
        if(root == nullptr) {
            vector<int> tmp;
            return tmp;
        }
        result.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return result;
    }
};

//challenge
/*
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
     * @return: Preorder in ArrayList which contains node values.
     */
    vector<int> preorderTraversal(TreeNode * root) {
        // write your code here
        vector<int> result;
        if(root == nullptr) return result;
        stack<TreeNode*> s;
        TreeNode* current = root;
        while(current != nullptr || !s.empty())
        {
            while(current != nullptr)
            {
                result.push_back(current->val);
                s.push(current->right);
                current = current->left;
            }
        current = s.top();
        s.pop();
        }
        return result;
    }
};
*/
