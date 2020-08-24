/*

requirements

1254. Sum of Left Leaves
Find the sum of all left leaves in a given binary tree.

Example
Example 1

Input：
{3,9,20,#,#,15,7}
Output：24

Explanation：There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.
    3
   / \
  9  20
    /  \
   15   7
Example 2:

Input:
{1,#,2,#,3}
Output:
0

Explanatinon:
1
  \
    2
      \
       3

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
     * @param root: t
     * @return: the sum of all left leaves
     */
    int sumOfLeftLeaves(TreeNode * root) {
        // Write your code here
        if (root == nullptr) return 0;
        sum = 0;
        dfs(root, false);
        return sum;
    }
private:
    int sum;
    void dfs(TreeNode * root, bool tag)
    {
        if (root->left == nullptr && root->right == nullptr)
        {
            if (tag) sum += root->val;
            return;
        }
        if (root->left != nullptr)
            dfs(root->left, true);
        if (root->right != nullptr)
            dfs(root->right, false);
    }
};