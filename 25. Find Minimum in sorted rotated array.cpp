class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        for(auto num:nums){
            mini = min(mini,num);
        }
        return mini;
    }
};