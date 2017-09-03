class Solution {
public:
    int integerBreak(int n) //可以用反证法证明如果分成的一个数比3大，那么可以转变成更大的乘积。
    {
        if(n==2)
            return 1;
        if(n==3)
            return 2;
        if(n%3==0) 
            return pow(3,n/3);
        if(n%3==1)
            return pow(3,n/3-1)*4;
        if(n%3==2)
            return pow(3,n/3)*2;
    }
};