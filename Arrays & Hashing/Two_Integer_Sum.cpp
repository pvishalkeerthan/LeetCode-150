class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>ans(2,-1);
        for(int i=0;i<nums.size();i++){
            int comp=target-nums[i]; //complement found
            if(mp.find(comp)!=mp.end()){
                ans[0]=mp[comp]; 
                ans[1]=i;
                break;
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};
