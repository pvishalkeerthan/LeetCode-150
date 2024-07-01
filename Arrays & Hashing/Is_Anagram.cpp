class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp1;
        map<char,int>mp2;
        if(s.length()!=t.length()){
            return false;
        }
        for(auto i:s){
            mp1[i]++;
        }
        for(auto j:t){
            mp2[j]++;
        }
        for(auto i:s){
            if(mp1[i]==mp2[i]){
                continue;
            }
            return false;
        }
        return true;
    }
};
