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
    vector<vector<int> >res;       //���ݳ�Ա���Ǻ����ڶ���
    void BFS(TreeNode* node,int level)
    {
        if (node==NULL)
            return;      //�߽�����
        if (res.size()==level)
            res.push_back (vector<int>());   //�����µ�level
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