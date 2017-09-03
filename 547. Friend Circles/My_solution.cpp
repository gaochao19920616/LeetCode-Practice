class Solution {
public:
    
    int get[200]={0};
    int findCircleNum(vector<vector<int> >& M) 
    {
        int N = M.size();
        int group=0;
        for(int i=0;i <N;i++)
            if (!get[i])
            {
                get[i]=1;
                group++;
                search(i,M,N);
            }
        return group;
    }
    void search(int n,vector<vector<int>>& M,int N)
    {
        for(int i=0;i<N;i++)
            if(M[n][i]==1 && get[i]==0)
            {
                get[i]=1;
                search(i,M,N);
            }
    }
};