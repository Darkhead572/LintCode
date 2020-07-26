/*

requirements

453. Flatten Binary Tree to Linked List
Flatten a binary tree to a fake "linked list" in pre-order traversal.

Here we use the right pointer in TreeNode as the next pointer in ListNode.

Example
Example 1:

Input:{1,2,5,3,4,#,6}
Output：{1,#,2,#,3,#,4,#,5,#,6}
Explanation：
     1
    / \
   2   5
  / \   \
 3   4   6

1
\
 2
  \
   3
    \
     4
      \
       5
        \
         6
Example 2:

Input:{1}
Output:{1}
Explanation：
         1
         1
Challenge
Do it in-place without any extra memory.

Notice
Don't forget to mark the left child of each node to null. Or you will get Time Limit Exceeded or Memory Limit Exceeded.


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
    void flatten(TreeNode * root) {
        // write your code here
        vector<TreeNode*> v;
        stack<TreeNode*> s;
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
        p = root;
        for(int i = 1; i < v.size(); ++i)
        {
            p->left = nullptr;
            p->right = v[i];
            v[i]->left = nullptr;
            p = v[i];
        }
    }
};