class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>store;
        for(auto val:nums){
            store[val]++;
        }
        vector<pair<int,int>>sorted;
        for(auto n:store){
            sorted.push_back(make_pair(n.second,n.first));
        }
        sort(sorted.begin(),sorted.end());
            vector<int>top;
        int len = sorted.size();
        for(int i=len-1;i>=len-k;i--){
            top.push_back(sorted[i].second);
        }
        return top;
    }
};