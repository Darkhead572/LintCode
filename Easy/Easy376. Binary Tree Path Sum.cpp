/*

requirements

376. Binary Tree Path Sum
Given a binary tree, find all paths that sum of the nodes in the path equals to a given number target.

A valid path is from root node to any of the leaf nodes.

Example
Example 1:

Input:
{1,2,4,2,3}
5
Output: [[1, 2, 2],[1, 4]]
Explanation:
The tree is look like this:
	     1
	    / \
	   2   4
	  / \
	 2   3
For sum = 5 , it is obviously 1 + 2 + 2 = 1 + 4 = 5
Example 2:

Input:
{1,2,4,2,3}
3
Output: []
Explanation:
The tree is look like this:
	     1
	    / \
	   2   4
	  / \
	 2   3
Notice we need to find all paths from root node to leaf nodes.
1 + 2 + 2 = 5, 1 + 2 + 3 = 6, 1 + 4 = 5 
There is no one satisfying it.
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
    /*
     * @param root: the root of binary tree
     * @param target: An integer
     * @return: all valid paths
     */
    vector<vector<int>> binaryTreePathSum(TreeNode * root, int target) {
        // write your code here
        vector<vector<int>> res;
        dfs(res, {}, 0, root, target);
        return res;
    }
    void dfs(vector<vector<int>>& res, vector<int> path, int sum, TreeNode * root, int target)
    {
        if (root == nullptr) return;
        if (root->left == nullptr && root->right == nullptr)
        {
            path.push_back(root->val);
            if (sum + root->val == target)
                res.push_back(path);
            return;
        }
        path.push_back(root->val);
        if (root->left != nullptr)
            dfs(res, path, sum + root->val, root->left, target);
        if (root->right != nullptr)
            dfs(res, path, sum + root->val, root->right, target);
    }
};