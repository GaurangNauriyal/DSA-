class Solution {
public:
    int calculate(string s) {
        stack<long long> st;
        long long result = 0;
        long long sign = 1;
        long long num = 0;
        int n = s.size();    
        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (isdigit(c)) {
                num = 0;
                while (i < n && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                i--; 
                result += sign * num;
            }
            else if (c == '+') {
                sign = 1;
            }
            else if (c == '-') {
                sign = -1;
            }
            else if (c == '(') {
                st.push(result);
                st.push(sign);
                result = 0;
                sign = 1;
            }
            else if (c == ')') {
                long long prevSign = st.top(); st.pop();
                long long prevResult = st.top(); st.pop();
                result = prevResult + prevSign * result;
            }
        }
        return (int)result;
    }
};