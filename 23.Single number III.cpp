class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        set<int>check;
        for(auto n:nums){
            if(check.find(n)!=check.end())
                check.erase(n);
            else
                check.insert(n);
        }
        return {*check.begin(),*check.rbegin()};
    }
};