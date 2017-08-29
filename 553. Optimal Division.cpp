class Solution {
public:
    // 由于第一个数始终为分子，第二个数始终为分母，此题只需把剩下的数变到分子上即可保证结果最大：
    // maxres = a1/(a2/a3/a4/.../an)
    string optimalDivision(vector<int>& nums) 
    {
        int N=nums.size();
        string res="";
        if (N==1)
            res+=Num2Str(nums[0]);
        else if (N==2)
            res+=(Num2Str(nums[0])+'/'+Num2Str(nums[1]));
        else
        {
            res+=(Num2Str(nums[0])+"/("+Num2Str(nums[1]));
            for(int i=2;i<N;i++)
                res+=('/'+Num2Str(nums[i]));
            res+=')';
        } 
        return res;
    }
    string Num2Str(int number)           //convert integer to string
    {
        string ans="";
        while(number)
        {
            char nb=number%10+'0';
            ans=nb+ans;
            number/=10;
        }
        return ans;
    }
};
