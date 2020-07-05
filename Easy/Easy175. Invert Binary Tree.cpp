/*

requirements

175. Invert Binary Tree
中文English
Invert a binary tree.Left and right subtrees exchange.

样例
Example 1:

Input: {1,3,#}
Output: {1,#,3}
Explanation:
	  1    1
	 /  =>  \
	3        3
Example 2:

Input: {1,2,3,#,#,4}
Output: {1,3,2,#,4}
Explanation: 
	
      1         1
     / \       / \
    2   3  => 3   2
       /       \
      4         4
挑战
Do it in recursion is acceptable, can you do it without recursion?
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
     * @param root: a TreeNode, the root of the binary tree
     * @return: nothing
     */
    /*
    void invertBinaryTree(TreeNode * root) {
        // write your code here
        dfs(root);
    }
private:
    void dfs(TreeNode *node) {
        auto left = node->left;
        auto right = node->right;
        node->left = right;
        node->right = left;
        if (left != nullptr)
            dfs(left);
        if (right != nullptr)
            dfs(right);
    }
    */
    //challenge
    //without recursion
    void invertBinaryTree(TreeNode * root) {
        stack<TreeNode*> s;
        vector<TreeNode*> v;
        TreeNode *p = root;
        while(p != nullptr || !s.empty())
        {
            while(p != nullptr)
            {
                v.push_back(p);
                s.push(p);
                p = p->left;
            }
            if(!s.empty())
            {
                p = s.top();
                s.pop();
                p = p->right;
            }
        }
        for(int i = 0; i < v.size(); ++i)
        {
            swap(v[i]->left, v[i]->right);
        }
    }
};