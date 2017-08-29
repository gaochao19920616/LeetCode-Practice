class Solution {
public:
    int countArrangement(int N) 
    {
        vector<int>Array ; 
        for(int i=0;i<N;i++)
           Array.push_back(i+1);   
        return count(0,N,Array);
    }
    int count(int n,int N,vector<int> &Array)
    {
        if (n==N-1)
            return (N % Array[N-1]==0)? 1:0;//±ß½çÌõ¼þ
        int res=0;
        for (int i=N-1;i>=n;i--)
            if (Array[i]%(n+1)==0 || (n+1)%Array[i]==0)
            {
                swap(Array[n],Array[i]);
                res+=count(n+1,N,Array);  
                swap(Array[n],Array[i]); //back tracking 
            }
        return res;
    }
};