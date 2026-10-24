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
        stack<string> st;
        for(string s :tokens){
            if(s=="+"||s=="-"||s=="*"||s=="/"){
                int j=0;
                int b=stoi(st.top());
                st.pop();
                int a=stoi(st.top());
                st.pop();
                j=fun(a,b,s);
                st.push(to_string(j));
            }
            else st.push(s);
            
        }
        return stoi(st.top());
        
    }
};