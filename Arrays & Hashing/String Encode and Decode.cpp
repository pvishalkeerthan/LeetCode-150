class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(auto i:strs){
            s+=i;
            s+="/";
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>a;
        string ss;
        for(char c:s){
            if(c=='/'){
                a.push_back(ss);
                ss="";
            }
            else{
                ss+=c;
            }
        }
        return a;
    }
};
