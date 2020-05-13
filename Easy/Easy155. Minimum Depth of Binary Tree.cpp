/*

requirements
155. Minimum Depth of Binary Tree
中文English
Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

Example
Example 1:

Input: {}
Output: 0
Example 2:

Input:  {1,#,2,3}
Output: 3	
Explanation:
	1
	 \ 
	  2
	 /
	3    
it will be serialized {1,#,2,3}
Example 3:

Input:  {1,2,3,#,#,4,5}
Output: 2	
Explanation: 
      1
     / \ 
    2   3
       / \
      4   5  
it will be serialized {1,2,3,#,#,4,5}

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
     * @param root: The root of binary tree
     * @return: An integer
     */
    int minDepth(TreeNode * root) {
        // write your code here
        if(root == nullptr) return 0;
        if (root->left==NULL&&root->right==NULL)
        {
            return 1;
        }
        int l = minDepth(root->left);
        int r = minDepth(root->right);
        
        l = (l == 0? INT_MAX: l);
        r = (r == 0? INT_MAX: r);
        return l > r? r + 1: l + 1;


    }
};