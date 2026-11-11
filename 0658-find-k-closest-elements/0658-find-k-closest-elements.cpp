class Solution {
public:
    vector<int> findClosestElements(vector<int>& v, int k, int x) {
        int n=v.size();
        int l=-1,r=n;
        bool f=false;
        for(int i=0;i<n;i++){
            if(v[i]<x)l=i;
            if(!f && v[i]>x){
                f=true;
                r=i;
            }
        }
        int h = r-l-1;
        vector<int>a;
        if(h>=k){
            vector<int>an;
            for(int i=0;i<k;i++)an.push_back(x);
           return an;
        }
        else {
            for(int i=0;i<h;i++)a.push_back(x);
        }
        k-=h;
        
        while(k){
            if(l==-1){
               a.push_back(v[r]);
               r++;
            }
            else if(r==n){
                a.push_back(v[l]);
                l--;
            }
            else if((x-v[l])<=(v[r]-x)){
                a.push_back(v[l]);
                l--;
            }
            else {
                a.push_back(v[r]);
                r++;
            }
            k--;
        }
        sort(a.begin(),a.end());
        return a;
    }
};