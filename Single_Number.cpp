class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            // map<int,int> freqmap;
    
            // for(int num : nums){
            //     freqmap[num]++;
            // }
    
            // for(auto const&[key, val] : freqmap){
            //     if(val == 1){
            //         return key;
            //     }
            // }
            // return -1;
    
    
            // 0(n).
            int ans = 0;
            for(int val : nums){
                ans = ans ^ val;
            }
            return ans;
        }
    
    };