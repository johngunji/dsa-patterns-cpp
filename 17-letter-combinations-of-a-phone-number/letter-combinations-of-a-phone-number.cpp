class Solution {
public:
    void fun(vector<string> &ans,int d,string s,int i,vector<string>&m,string digits){

        if(i==d){
            ans.push_back(s);
            return ;
        }
        for(char c:m[digits[i]-'0']){
            string t=s;
            s+=c;
            fun(ans,d,s,i+1,m,digits);
            s=t;
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
    vector<string> m = {
    "", "", "abc", "def", "ghi", "jkl",
    "mno", "pqrs", "tuv", "wxyz"
    };
        vector<string> ans;
        fun(ans,digits.size(),"",0,m,digits);
        return ans;
    }
};