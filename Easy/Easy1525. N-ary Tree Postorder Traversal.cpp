/*

requirements

1525. N-ary Tree Postorder Traversal
Given an n-ary tree, return the postorder traversal of its nodes' values.

Example
Example

Input : {1,3,2,4#2#3,5,6#4#5#6}
Output: [5,6,3,2,4,1]
Explanation:
The tree is look like this: (in left)
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
     * @param root: the root of the tree
     * @return: post order of the tree
     */
    vector<int> postorder(UndirectedGraphNode* root) {
        // write your code here
        vector<int> res;
        postorderN_ary(root, res);
        return res;
    }
private:
    void postorderN_ary(UndirectedGraphNode* root, vector<int>& tmp)
    {
        if (root == nullptr)
            return;
        for (int i = 0; i < root->neighbors.size(); ++i)
            postorderN_ary(root->neighbors[i], tmp);
        tmp.push_back(root->label);
    }
};