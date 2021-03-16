/*
1524. Search in a Binary Search Tree
Given the root of a binary search tree (BST) and a value.

Return the node whose value equals the given value. If such node doesn't exist, return null.

Example
Example 1:

Input: value = 2
        4
       / \
      2   7
     / \
    1   3
Output: node 2
Example 2:

Input: value = 5
        4
       / \
      2   7
     / \
    1   3
Output: null
*/

/*
1524. 在二叉搜索树中查找
给定一颗二叉搜索树和 value.

返回这棵树中值等于 value 的节点. 如果不存在这样的节点, 返回 null.

Example
样例 1:

输入: value = 2
        4
       / \
      2   7
     / \
    1   3
输出: 节点 2
样例 2:

输入: value = 5
        4
       / \
      2   7
     / \
    1   3
输出: null
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
     * @param root: the tree
     * @param val: the val which should be find
     * @return: the node
     */
    TreeNode * searchBST(TreeNode * root, int val) {
        // Write your code here.
        if (root == nullptr) return nullptr;
        auto current = root;
        while (true)
        {
            if (current == nullptr || current->val == val)
                break;
            else if (current->val < val)
                current = current->right;
            else current = current->left;
        }
        return current;
    }
};