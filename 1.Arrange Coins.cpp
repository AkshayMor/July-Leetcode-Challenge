class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1) return 1;
        int low=1;
        long long high=n,mid;
        while(low<=high){
           mid=low+(high-low)/2;
            if((mid*(mid+1))/2>n)
                high=mid-1;
            else
                low=mid+1;
        }
        return --low;
    }
};