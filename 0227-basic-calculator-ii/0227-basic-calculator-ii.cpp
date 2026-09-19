class Solution {
public:
    int calculate(string s) {
        stack<int>st;
        char sign='+';
        s+='+';
        int current=0;
        for(auto u:s){
            if(isdigit(u))
            {
                current=1LL*current*10+u-'0';
            }
            if(u=='+'||u=='-'||u=='*'||u=='/')
            {
                if(sign=='+'){
                    st.push(current);
                }
                else if(sign=='-'){
                    st.push(current*-1);
                }
                else if(sign=='*'){
                    int x=st.top();
                    st.pop();
                    st.push(x*current);
                }
                else{
                    int x=st.top();
                    st.pop();
                    st.push(x/current);
                }
                current=0;
                sign=u;
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};