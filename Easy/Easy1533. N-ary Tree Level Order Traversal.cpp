/*

reqirements

1533. N-ary Tree Level Order Traversal
Given an n-ary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example, given a 3-ary tree:



We should return its level order traversal:

[
     [1],
     [3,2,4],
     [5,6]
]
Example
Example 1:

Input：{1,3,2,4#2#3,5,6#4#5#6}
Output：[[1],[3,2,4],[5,6]]
Explanation：Pictured above
Example 2:

Input：{1,3,2#2#3}
Output：[[1],[3,2]]
Explanation：
          1
	 / \
	3   2
Notice
The depth of the tree is at most 1000.
The total number of nodes is at most 5000.
graph model explaination:
https://www.lintcode.com/help/graph
*/

class Solution {
public:
    vector<vector<int>> levelOrder(vector<DirectedGraphNode*> &nodes) {
        vector<vector<int>> result;
        if(nodes.empty()) return result;
        auto root = nodes[0];
        queue<DirectedGraphNode*> q;
        q.push(root);
        DirectedGraphNode* current = root;
        while(!q.empty())
        {
            //record the numbers of nodes of this layer
            int length = q.size();
            vector<int> tmp;
            while(length--)
            {
                current = q.front();
                tmp.push_back(current->label);
                q.pop();
                for (int i = 0; i < current->neighbors.size(); ++i)
                    q.push(current->neighbors[i]);
            }
            result.push_back(tmp);
        }
        return result;
    }
};