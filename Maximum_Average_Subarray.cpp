class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // Brute Forse o(n^2)

        // int n = nums.size();
        // double maxAvg = -1e9;
        // for(int i=0;i<=n-k;i++){
        //     int kSum = 0;
        //     for(int j = i;j< i+k;j++){
        //         kSum += nums[j];
        //     }
        //     double avg = (double)kSum / k;
        //     maxAvg = max(maxAvg, avg);
        // }
        // return maxAvg;

        // Optimize o(n)

        int n = nums.size();
        int MaxWindow = 0;

        for(int i=0;i<k;i++){
            MaxWindow+=nums[i]; // Sum of first window
        }
        int MaxSum = MaxWindow;

        for(int i = k; i<n;i++){
            MaxWindow+= nums[i] - nums[i -k];
            MaxSum = max(MaxWindow, MaxSum);
        }
        // return double(MaxSum/k);
        return (double) MaxSum/k;
    }
};