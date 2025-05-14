class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0;
        int end = nums.size() - 1;

        if(nums.size() == 1){
            return nums[0];
        }

        while(st <= end){
            int mid = st + (end - st) / 2;

            // conner case
            if(mid == 0 && nums[0] != nums[1]){
                return nums[mid];
            }
            if(mid == nums.size() - 1 && nums[nums.size() - 1] != nums[nums.size()-2]){
                return nums[mid];
            }

            if(nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1] ){
                return nums[mid];
            }
            // even case
            if(mid % 2 == 0){
                if(nums[mid - 1] == nums[mid]){ // left search
                    end = mid - 1;

                }
                else{
                    st = mid + 1;
                }
            }
            else{
                if(nums[mid - 1] == nums[mid]){ // Right search
                    st = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};