/*
***********requirements***********
Description
Find the maximum node in a binary tree, return the node.

Example
Example 1:

Input:
{1,-5,3,1,2,-4,-5}
Output: 3
Explanation:
The tree look like this:
     1
   /   \
 -5     3
 / \   /  \
1   2 -4  -5
Example 2

Input:
{10,-5,2,0,3,-4,-5}
Output: 10
Explanation:
The tree look like this:
     10
   /   \
 -5     2
 / \   /  \
0   3 -4  -5 

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
     * @param root: the root of tree
     * @return: the max node
     */
    TreeNode * maxNode(TreeNode * root) {
        // write your code here
        if(root == nullptr) return nullptr;
        TreeNode* l=maxNode(root->left);
        TreeNode* r=maxNode(root->right);
        if(!l&&!r) return root;
        if(l == nullptr)
        {
            return root->val > r->val?
            root:r;
        }
        if(r == nullptr)
        {
            return root->val > l->val?
            root:l;
        }
        l = l->val > r->val?l:r;
        return l->val > root->val?l:root;
    }
};

//use non-recursive
/*
class Solution {
public:
    /*
     * @param root: the root of tree
     * @return: the max node
     */
    TreeNode * maxNode(TreeNode * root) {
        // write your code here
        queue<TreeNode*> q;
        if (root == nullptr) return root; 
        q.push(root);
        TreeNode* max = root;
        while (!q.empty())
        {
            if(q.front()->val > root->val)
                root = q.front();
            if (q.front()->left != nullptr)
                q.push(q.front()->left);   
            if (q.front()->right != nullptr)
                q.push(q.front()->right);
            q.pop();
        }
        return root;
    }
};
*/
