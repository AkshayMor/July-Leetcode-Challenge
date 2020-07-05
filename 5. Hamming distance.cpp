class Solution {
public:
    int hammingDistance(int x, int y) {
        int dist = 0;
        int a,b;
        while(x || y){
            a = x%2;
            b= y%2;
            if(a^b) dist++;
            x/=2;
            y/=2;
        }
        return dist;
    }
};