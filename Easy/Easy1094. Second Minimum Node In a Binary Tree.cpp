/*

requirements

1094. Second Minimum Node In a Binary Tree
Given a non-empty special binary tree consisting of nodes with the non-negative value, where each node in this tree has exactly two or zero sub-node. If the node has two sub-nodes, then this node's value is not bigger than its two sub-nodes.

Given such a binary tree, you need to output the second minimum value in the set made of all the nodes' value in the whole tree.

If no such second minimum value exists, output -1 instead.

Example
Example 1:

Input: 
    2
   / \
  2   5
     / \
    5   7

Output: 5
Explanation: The smallest value is 2, the second smallest value is 5.
Example 2:

Input: 
    2
   / \
  2   2

Output: -1
Explanation: The smallest value is 2, but there isn't any second smallest value.
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
     * @param root: the root
     * @return: the second minimum value in the set made of all the nodes' value in the whole tree
     */
    int findSecondMinimumValue(TreeNode * root) {
        // Write your code here
        set<int> mySet;
        if(root == nullptr) return -1;
        stack<TreeNode*> s;
        TreeNode* p = root;
        while(p != nullptr || !s.empty())
        {
            while(p != nullptr)
            {
                mySet.insert(p->val);
                
                s.push(p->right);
                p = p->left;
            }
        p = s.top();
        s.pop();
        }
        if (mySet.size() < 2) return -1;
        else
        {
            mySet.erase(mySet.begin());
            return *mySet.begin();
        }
    }
};