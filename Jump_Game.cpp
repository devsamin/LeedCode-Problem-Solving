class Solution {
public:
    bool solved(vector<int>& nums, int idx, vector<int>& dp){
        int n = nums.size() - 1;
        if(idx == n){
            return true;
        }
        if(dp[idx] != -1){
            return dp[idx];
        }
        for(int i = 1;i<=nums[idx];i++){
            if(solved(nums, idx+i, dp) == true){
                return dp[idx] = true;
            }
        }
        return dp[idx] = false;
    }
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solved(nums, 0, dp);
    }
};