class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // o(n)
        int nonZero = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                nums[nonZero++] = nums[i]; // All non zero move front by order
            }
        }
        for(int i=nonZero;i<nums.size();i++){
            nums[i] = 0; // baki gula te zero bosai disi
        }
    }
};