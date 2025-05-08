class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            map<int,int> freqmap;
    
            for(int num : nums){
                freqmap[num]++;
            }
    
            for(auto const&[key, val] : freqmap){
                if(val == 1){
                    return key;
                }
            }
            return -1;
        }
    
    };