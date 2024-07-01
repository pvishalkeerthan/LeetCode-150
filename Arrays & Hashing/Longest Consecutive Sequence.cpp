class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.empty()) return 0;
        int c=1;
        int d=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i+1]-nums[i]==1){
                c++;
            }
            else if(nums[i+1]==nums[i]){
                continue;
            }
            else{
                d=max(c,d);
                c=1;
            }
        }
        d=max(c,d);
        return d;
    }
};
