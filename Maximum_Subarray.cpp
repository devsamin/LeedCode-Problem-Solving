class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            // brute force approach o(n2)
            // int maxsum = INT_MIN;
            // for(int st=0; st<nums.size();st++){
            //     int currSum = 0;
            //     for(int end = st; end < nums.size(); end++){
            //         currSum+=nums[end];
            //         maxsum = max(currSum, maxsum);
            //     }
            // }
            // return maxsum;
    
            // kadans algoritms boro negative k 0 korede
    
            int maxSum = INT_MIN;
            int currSum = 0;
            for(int i=0;i<nums.size();i++){
                currSum+=nums[i];
                maxSum = max(currSum, maxSum);
                if(currSum < 0){
                    currSum = 0;
                }
    
            }
            return maxSum;
        }
    };