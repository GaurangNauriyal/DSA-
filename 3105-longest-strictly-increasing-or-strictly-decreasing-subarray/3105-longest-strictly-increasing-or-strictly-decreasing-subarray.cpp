class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1;
       int dec = 1;
       int maxinc = 1;
       int maxdec = 1;

       for(int i = 0; i < nums.size()-1; i++) {
            if(nums[i+1] > nums[i]) {
                inc++;
                maxinc = max(maxinc, inc);
                dec = 1;
            }
            else if(nums[i+1] < nums[i]) {
                dec++;
                maxdec = max(maxdec, dec);
                inc = 1;
            }
            else {
                inc = 1;
                dec = 1;
            }
       }

       return max(maxdec, maxinc);
    }
};