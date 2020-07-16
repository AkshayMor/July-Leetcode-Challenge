class Solution {
public:
    double power(double x,int y){
        int sign = 1;
        double res = 1;
        long long n=y;
        if(n<0){
            sign = -1;
            n*=-1;
        }
        while(n>=1){
            if(n%2==0){
                x=x*x;
                n/=2;                
            }
            else{
                res=res*x;
                n--;
            }
        }
        if(sign==-1){
            res = 1/res;
        }
        return res;
    }
    double myPow(double x, int n) {
       return power(x,n);
    }
};