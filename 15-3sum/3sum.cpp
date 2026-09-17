class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        for (int i = 0; i < nums.size(); i++) {
            int target = nums[i];
            int t=target*-1;
            int l = i + 1;
            int r = nums.size() - 1;
            while (l < r) {
                if (nums[l] + nums[r] + target==0) {
                    ans.insert({nums[i], nums[l], nums[r]}); 
                    l++;r--;
                } else if (nums[l] + nums[r] > t) {
                   r--;
                } else
                    l++;
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};