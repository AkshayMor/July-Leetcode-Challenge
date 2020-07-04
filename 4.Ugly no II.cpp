class Solution {
public:
    
    int ugly[1691];
    int nthUglyNumber(int n) {
        ugly[0]=1;
        int i1,i2,i3;
        i1=i2=i3=0;
        for(int i=1;i<n;i++){
        int mini=min(ugly[i1]*2,min(ugly[i2]*3,ugly[i3]*5));
        ugly[i]=mini;
            if(mini==ugly[i1]*2) i1++;
            if(mini==ugly[i2]*3) i2++;
            if(mini==ugly[i3]*5) i3++;
    }
        return ugly[n-1];
    }
};