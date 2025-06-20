class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
            for(int i=0;i<n;i++){
                ans[2*i] = nums[i]; // x onnso
                ans[2*i +1] = nums[n+i]; // y onso
            }
        return ans;
        
    }
};