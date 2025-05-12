class Solution {
    public:
        // binary search approach
        int search(vector<int>& nums, int tar) {
            int st = 0;
            int end = nums.size() - 1;
    
            while(st <= end){
                int mid = st + (end - st)/2;
                if(nums[mid] == tar){
                    return mid;
                }
    
                if(nums[st] <= nums[mid]){ // left sorted
                    if(nums[st] <= tar && tar <= nums[mid]){
                        end = mid - 1;
                    }
                    else{
                        st = mid + 1;
                    }
                }
                else{ // Right sorted
                    if(nums[mid] <= tar && tar <= nums[end]){
                        st = mid + 1;
                    }
                    else{
                        end = mid -  1;
                    }
                }
            }
            return -1;
        }
    };