class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,string>mp;
        vector<vector<string>>a;
        for(auto i:strs){
            string word=i;
            sort(word.begin(),word.end());
            mp[word]=i;
        }
        for(auto i:mp){
            a.push_back(i.second);
        }
    }
};
