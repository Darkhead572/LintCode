/*

requirements

1115. Average of Levels in Binary Tree
Given a non-empty binary tree, return the average value of the nodes on each level in the form of an array.

Example
Example 1:

Input:
    3
   / \
  9  20
    /  \
   15   7
Output: [3, 14.5, 11]
Explanation:
The average value of nodes on level 0 is 3,  on level 1 is 14.5, and on level 2 is 11. Hence return [3, 14.5, 11].
Notice
The range of node's value is in the range of 32-bit signed integer.
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
     * @param root: the binary tree of the  root
     * @return: return a list of double
     */
    vector<double> averageOfLevels(TreeNode * root) {
        // write your code here
        vector<double> result;
        if (root == nullptr) return result;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* current = root;
        while(!q.empty())
        {
            //record the numbers of nodes of this layer
            int length = q.size();
            int sum = 0, m = length;
            while(length--)
            {
                current = q.front();
                sum += current->val;
                q.pop();
                if(current->left != nullptr) q.push(current->left);
                if(current->right != nullptr) q.push(current->right);
            }
            result.push_back(sum * 1.0 / m);
        }
        return result;
    }
};