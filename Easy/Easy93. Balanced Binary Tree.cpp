/*
93. Balanced Binary Tree
中文English
Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

Example
Example  1:
	Input: tree = {1,2,3}
	Output: true
	
	Explanation:
	This is a balanced binary tree.
		  1  
		 / \                
		2  3

	
Example  2:
	Input: tree = {3,9,20,#,#,15,7}
	Output: true
	
	Explanation:
	This is a balanced binary tree.
		  3  
		 / \                
		9  20                
		  /  \                
		 15   7 

	
Example  3:
	Input: tree = {1,#,2,3,4}
	Output: false
	
	Explanation:
	This is not a balanced tree. 
	The height of node 1's right sub-tree is 2 but left sub-tree is 0.
		  1  
		   \                
		   2                
		  /  \                
		 3   4
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
     * @param root: The root of binary tree.
     * @return: True if this Binary tree is Balanced, or false.
     */
    int height(TreeNode* root)
    {
        if(root == nullptr) return 0;
        int left = 0;
        int right = 0;
        left = height(root->left);
        right = height(root->right);
        return left > right? left + 1:right + 1;
    }
    bool isBalanced(TreeNode * root) {
        // write your code here
        if(root == nullptr) return 1;
        int left = height(root->left);
        int right = height(root->right);
        int gap = right - left;
        if(gap > 1 || gap < -1) return 0;
        else return isBalanced(root->left) && isBalanced(root->right);
    }
};

//use Postorder Traversal
/*
class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: True if this Binary tree is Balanced, or false.
     */
    bool isBalanced(TreeNode * root, int& depth) {
        // write your code here
        if (root == NULL)
        {
            depth = 0;
            return true;
        }
        int left, right;
        if (isBlanced(root->left, left) && isBlanced(root->right, right))
        {
            int gap = right - left;
            if (gap <= 1 && gap >= -1)
            {
                depth = left > right? left + 1: right + 1;
                return true;
            }
        }
        return false;
    }
};
*/
