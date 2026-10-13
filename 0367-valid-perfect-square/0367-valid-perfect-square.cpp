class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 1;
        int high = num;
        long long mid;
        while( low <= high ){
            mid = low + ( high-low )/2;
            if( mid * mid == ( long long )num ) return true;
            else if( mid * mid < ( long long )num ) low = mid+1;
            else high = mid-1;
        }
        return false;
    }
};