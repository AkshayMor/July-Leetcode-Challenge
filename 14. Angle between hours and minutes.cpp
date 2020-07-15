class Solution {
public:
    double angleClock(int hour, int minutes) {
       double m= minutes*6;
       double h= (hour%12)*30+double(minutes)/2;;
        // cout<<m<<" "<<h;
        double d=abs(h-m);
        //cout<<d;
         d=min(d,360-d);
        return d;
        
    }
};.cpp.....