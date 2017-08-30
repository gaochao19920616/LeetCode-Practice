/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int> >res;       //数据成员，非函数内定义
    void BFS(TreeNode* node,int level)
    {
        if (node==NULL)
            return;      //边界条件
        if (res.size()==level)
            res.push_back (vector<int>());   //开拓新的level
        res[level].push_back(node->val);
        BFS(node->left,level+1);
        BFS(node->right,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        BFS(root,0);
        return res;
    }
    
};