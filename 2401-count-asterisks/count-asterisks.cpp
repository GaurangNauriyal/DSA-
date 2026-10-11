class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0;
        int brace = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='|' && brace!=1) brace=1;
            else if(s[i]=='*' && brace!=1) ans++;
            else if(s[i]=='|' && brace==1) brace=0;
        }
        return ans;
    }
};