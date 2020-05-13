/*
69. Binary Tree Level Order Traversal
中文English
Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

Example
Example 1:

Input：{1,2,3}
Output：[[1],[2,3]]
Explanation：
  1
 / \
2   3
it will be serialized {1,2,3}
level order traversal
Example 2:

Input：{1,#,2,3}
Output：[[1],[2],[3]]
Explanation：
1
 \
  2
 /
3
it will be serialized {1,#,2,3}
level order traversal
Challenge
Challenge 1: Using only 1 queue to implement it.

Challenge 2: Use BFS algorithm to do it.

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
     * @return: Level order a list of lists of integer
     */
    vector<vector<int>> levelOrder(TreeNode * root) {
        // write your code here
        vector<vector<int>> result;
        if(root == nullptr) return result;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* current = root;
        while(!q.empty())
        {
            //record the numbers of nodes of this layer
            int length = q.size();
            vector<int> tmp;
            while(length--)
            {
                current = q.front();
                tmp.push_back(current->val);
                q.pop();
                if(current->left != nullptr) q.push(current->left);
                if(current->right != nullptr) q.push(current->right);
            }
            result.push_back(tmp);
        }
        return result;
    }
};
