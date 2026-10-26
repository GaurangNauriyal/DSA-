class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0;
        int minLen = INT_MAX;
        int n = nums.size();
        int sum = 0;
        while (right < n) {
            while (right < n && sum < target) {
                sum += nums[right];
                right++;
            }
            if (right == n && sum < target && minLen == INT_MAX)
                return 0;

            while (left < n && sum >= target) {
                minLen = min(minLen, right - left);
                sum -= nums[left];
                left++;
            }
        }
        return minLen;
    }
};