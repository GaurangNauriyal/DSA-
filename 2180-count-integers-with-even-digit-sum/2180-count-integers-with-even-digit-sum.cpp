class Solution {
public:
int sumEven(int n){
        int res=0;
        while(n){
            res+=n%10;
            n=n/10;
        }
        return res%2==0;
    }
    int countEven(int num) {
        int res=0;
        for(int i=2;i<=num;i++){
            if(sumEven(i)){
                res++;
            }
        }
        return res;
    }
};