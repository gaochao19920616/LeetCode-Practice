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
    vector<int>res;
    int kthSmallest(TreeNode* root, int k) 
    {
        searchTree(root);
        return res[k-1];
    }
    void searchTree(TreeNode* root)
    {
        if(root==NULL) return;
        searchTree(root->left);
        res.push_back(root->val);
        searchTree(root->right);
    }
};