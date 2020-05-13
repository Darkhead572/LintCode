/*
85. Insert Node in a Binary Search Tree
中文English
Given a binary search tree and a new tree node, insert the node into the tree. You should keep the tree still be a valid binary search tree.

Example
Example 1:
	Input:  tree = {}, node = 1
	Output:  1
	
	Explanation:
	Insert node 1 into the empty tree, so there is only one node on the tree.

Example 2:
	Input: tree = {2,1,4,3}, node = 6
	Output: {2,1,4,3,6}
	
	Explanation: 
	Like this:



	  2             2
	 / \           / \
	1   4   -->   1   4
	   /             / \ 
	  3             3   6
		
Challenge
Can you do it without recursion?

Notice
You can assume there is no duplicate values in this tree + node.
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
     * @param root: The root of the binary search tree.
     * @param node: insert this node into the binary search tree
     * @return: The root of the new binary search tree.
     */
     
    TreeNode * insertNode(TreeNode * root, TreeNode * node) {
        // write your code here
        if(root == nullptr)
        {
            root = node;
            return root;
        }
        TreeNode* current = root;
        while(current != nullptr)
        {
            if(current->val > node->val)
            {
                if(current->left == nullptr)
                {
                    current->left = node;
                    return root;
                }
                current = current->left;
            }
            if(current->val < node->val)
            {
                if(current->right == nullptr)
                {
                    current->right = node;
                    return root;
                }
                current = current->right;
            }
        }
        return root;
    }
};
