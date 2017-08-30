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
            lastPop = N->val;       //��¼���һ�ε�����ֵ
            Q.pop();
            if (N->right!= NULL) Q.push(N->right);    //���ϵ��£����ҵ������������֤�������Ľڵ����Ҫ�ҵĽڵ�
            if (N->left != NULL) Q.push(N->left);
        }
        return lastPop;
    }
};