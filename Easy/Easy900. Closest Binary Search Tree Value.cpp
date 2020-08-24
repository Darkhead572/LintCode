/*

requirements

900. Closest Binary Search Tree Value
Given a non-empty binary search tree and a target value, find the value in the BST that is closest to the target.

Example
Example1

Input: root = {5,4,9,2,#,8,10} and target = 6.124780
Output: 5
Explanation：
Binary tree {5,4,9,2,#,8,10},  denote the following structure:
        5
       / \
     4    9
    /    / \
   2    8  10
Example2

Input: root = {3,2,4,1} and target = 4.142857
Output: 4
Explanation：
Binary tree {3,2,4,1},  denote the following structure:
     3
    / \
  2    4
 /
1
Notice
Given target value is a floating point.
You are guaranteed to have only one unique value in the BST that is closest to the target.
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
     * @param root: the given BST
     * @param target: the given target
     * @return: the value in the BST that is closest to the target
     */
    int closestValue(TreeNode * root, double target) {
        // write your code here
        minimum = INT_MAX, res = INT_MIN;
        dfs(root, target);
        return res;
    }
private:
    double minimum;
    int res;
    void dfs(TreeNode* root, const double& target)
    {
        if (root == nullptr) return;
        double tmp = abs(root->val - target);
        if (tmp < minimum)
            res = root->val, minimum = tmp;
        dfs(root->left, target);
        dfs(root->right, target);
    }
};

// better solution, make full use of BST
/*
class Solution {
public:
    int closestValue(TreeNode * root, double target) {
        // write your code here
        int closest = root->val;
        while (root) {
            if (abs(closest - target) >= abs(root->val - target)) {
                closest = root->val;
            }
            root = target < root->val ? root->left : root->right;
        }
        return closest;        
    }
};
*/