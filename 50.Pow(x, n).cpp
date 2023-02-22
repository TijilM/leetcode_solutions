class Solution {
public:
    double myPow(double x, int n) {
//        int power(int x, unsigned int y)
// {
//     if (y == 0)
//         return 1;
//     else if (y % 2 == 0)
//         return power(x, y / 2) * power(x, y / 2);
//     else
//         return x * power(x, y / 2) * power(x, y / 2);
// }
        long expo=abs(n);
        double curr=x;
        double result=1.0;
        for(int i =expo;i>0;i/=2){
            if(i % 2==1){
                result*=curr;
            }
            curr*=curr;
        }
        if(n<0)
            return 1.0/result;
        return result;
    }
};