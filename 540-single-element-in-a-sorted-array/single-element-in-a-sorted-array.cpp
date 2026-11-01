class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i = 0;
        int e = nums.size();

        while(i<e-1)
        {
            if(nums[i] == nums[i+1])
            {
                i+=2;
            }
            else
            {
                return nums[i];
            }
        }
        return nums[e-1];
    }
};