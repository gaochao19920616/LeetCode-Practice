class Solution {
public:
    int integerBreak(int n) //�����÷�֤��֤������ֳɵ�һ������3����ô����ת��ɸ���ĳ˻���
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