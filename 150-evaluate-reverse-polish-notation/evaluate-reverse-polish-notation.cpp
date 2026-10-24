class Solution {
public:
    int fun(int a ,int b, string c){
        if(c=="+")return a+b;
        if(c=="-")return a-b;
        if(c=="*")return a*b;
        if(c=="/")return a/b;
        return 0;
    }
    
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string s :tokens){
            if(s=="+"||s=="-"||s=="*"||s=="/"){
                int j=0;
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                j=fun(a,b,s);
                st.push(j);
            }
            else st.push(stoi(s));
            
        }
        return st.top();
        
    }
};
