class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<vector<int>>res(nums.size()+1);
        for(auto i:mp){
            res[i.second].push_back(i.first);
        }
        vector<int>ans;
        for(int i=res.size()-1;i>=0;i--){
            for(auto j:res[i]){
                ans.push_back(j);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return ans;
    }
};
