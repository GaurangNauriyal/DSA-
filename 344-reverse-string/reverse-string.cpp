class Solution {
public:
    void reverseString(vector<char>& s) {
        int t = s.size();
        for(int i=0;i<t/2 ; ++i){
            swap(s[i] , s[t-i-1]);
        }
    }
};