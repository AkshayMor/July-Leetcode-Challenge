class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        int L = prices.size();
        if(L < 2) return 0;

        int has1_doNothing = -prices[0];
        int has1_Sell = 0;
        int has0_doNothing = 0;
        int has0_Buy = -prices[0];
        for(int i=1; i<L; i++) {
            has1_doNothing = max(has1_doNothing , has0_Buy);
            has0_Buy = -prices[i] + has0_doNothing;
            has0_doNothing = max(has0_doNothing , has1_Sell);
            has1_Sell = prices[i] + has1_doNothing;
        }
        return max(has1_Sell , has0_doNothing);
    }
};