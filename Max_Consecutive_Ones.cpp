class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxConsecutive = 0;
        int Consecutive1 = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
               Consecutive1++;
               maxConsecutive = max(Consecutive1,maxConsecutive);

            }
            else{
                // maxConsecutive = max(Consecutive1,maxConsecutive);
                Consecutive1 = 0;
            }
            

        }
        return maxConsecutive;
    }
};