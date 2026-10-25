class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int n=nums.size();
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
            else{
                count=0;
            }
            if(count>=n/2){
                return nums[i];
            }
        }
        return nums[0];
    }
};