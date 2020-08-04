/*

requirements

1526. N-ary Tree Preorder Traversal
Given an n-ary tree, return the preorder traversal of its nodes' values.

Example
Example

Input : {1,3,2,4#2#3,5,6#4#5#6}
Output: [1,3,5,6,2,4]
Explanation:
The tree is look like this (in left):

Challenge
Recursive solution is trivial, could you do it iteratively?
*/

/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */

class Solution {
public:
    /**
     * @param root: the tree
     * @return: pre order of the tree
     */
    vector<int> preorder(UndirectedGraphNode* root) {
        // write your code here
        vector<int> res;
        preorderN_ary(root, res);
        return res;
    }
private:
    void preorderN_ary(UndirectedGraphNode* root, vector<int>& tmp)
    {
        if (root == nullptr)
            return;
        tmp.push_back(root->label);
        for (int i = 0; i < root->neighbors.size(); ++i)
            preorderN_ary(root->neighbors[i], tmp);
    }
};