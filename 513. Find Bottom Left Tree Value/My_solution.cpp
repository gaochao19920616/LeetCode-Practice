class Solution {
public:
    int lastPop;
    queue<TreeNode*> Q;
    int findBottomLeftValue(TreeNode* root) 
    {
        Q.push(root);
        while(!Q.empty())
        {
            TreeNode* N=Q.front();
            lastPop = N->val;       //记录最后一次弹出的值
            Q.pop();
            if (N->right!= NULL) Q.push(N->right);    //从上到下，从右到左遍历树，保证最后遍历的节点就是要找的节点
            if (N->left != NULL) Q.push(N->left);
        }
        return lastPop;
    }
};