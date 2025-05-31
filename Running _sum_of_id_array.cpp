class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int runningsum =0;
        vector<int> ans;
        int idx = 0;
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            runningsum +=ans[idx];
            runningsum +=nums[i];
            ans.push_back(runningsum);
            idx++;
            runningsum = 0;

        }
        return ans;
    }
};