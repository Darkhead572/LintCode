/*

requirements

242. Convert Binary Tree to Linked Lists by Depth
Given a binary tree, design an algorithm which creates a linked list of all the nodes at each depth (e.g., if you have a tree with depth D, you'll have D linked lists).

样例
Example 1:

Input: {1,2,3,4}
Output: [1->null,2->3->null,4->null]
Explanation: 
        1
       / \
      2   3
     /
    4
Example 2:

Input: {1,#,2,3}
Output: [1->null,2->null,3->null]
Explanation: 
    1
     \
      2
     /
    3
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
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    ListNode* createLinkedList(const vector<int>& tmp)
    {
        if(!tmp.size())
            return nullptr;
        ListNode* first = new ListNode;
        ListNode* tmpNode = first;
        for(int i = 0; i < tmp.size(); ++i)
        {
            auto newNode = new ListNode(tmp[i]);
            tmpNode->next = newNode;
            tmpNode = newNode;
        }
        auto head = first->next;
        delete first;
        return head;
    }
public:
    /**
     * @param root the root of binary tree
     * @return a lists of linked list
     */
    vector<ListNode*> binaryTreeToLists(TreeNode* root) {
        // Write your code here
        vector<ListNode*> result;
        if(root == nullptr) 
            return result;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* current = root;
        while(!q.empty())
        {
            //record the numbers of nodes of this layer
            int length = q.size();
            vector<int> tmp;
            while(length--)
            {
                current = q.front();
                tmp.push_back(current->val);
                q.pop();
                if(current->left != nullptr)
                    q.push(current->left);
                if(current->right != nullptr)
                    q.push(current->right);
            }
            result.push_back(createLinkedList(tmp));
        }
        return result;
    }
};