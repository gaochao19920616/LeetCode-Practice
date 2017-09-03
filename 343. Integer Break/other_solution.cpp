class Solution {
public:
    long long integerBreak(long long n) {
        if(n == 2) return 1;
        if(n == 3) return 2;
        if(n == 4) return 4;
        if(n == 5) return 6;
        if(n == 6) return 9;
        return 3 * integerBreak(n - 3);//递归的思想
    }
};


// 另一种解法--循环
//  class Solution {
//     public :
//      int integerBreak(int n) {
//         if(n==2) return 1;
//         if(n==3) return 2;
//         int product = 1;
//         while(n>4){
//             product*=3;
//             n-=3;
//         }
//         product*=n;
        
//         return product;
//     }
// };