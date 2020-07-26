/*

requirements

480. Binary Tree Paths
Given a binary tree, return all root-to-leaf paths.

Example
Example 1:

Input：{1,2,3,#,5}
Output：["1->2->5","1->3"]
Explanation：
   1
 /   \
2     3
 \
  5
Example 2:

Input：{1,2}
Output：["1->2"]
Explanation：
   1
 /   
2
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
     * @param root: the root of the binary tree
     * @return: all root-to-leaf paths
     */
    void dfs(TreeNode* root, string tmp, vector<string>& res)
    {
        if (root == nullptr) return;
        tmp += to_string(root->val) + "->";
        if (root->left == nullptr && root->right == nullptr)
            res.push_back(tmp);
        if (root->left != nullptr)
            dfs(root->left, tmp, res);
        if (root->right != nullptr)
            dfs(root->right, tmp, res);
    }
    vector<string> binaryTreePaths(TreeNode * root) {
        // write your code here
        vector<string> res;
        dfs(root, "", res);
        for (int i = 0; i < res.size(); ++i)
        {
            // remove the last of "->"
            res[i].erase(res[i].length() - 2, 2);
        }
        return res;
    }
};