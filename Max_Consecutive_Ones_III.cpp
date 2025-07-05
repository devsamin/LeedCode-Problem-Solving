class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // Brute Forse o(n)
        // int n = nums.size();
        
        // int MaxLen = 0;

        // for(int i=0;i<n;i++){
        //     int CntZero = 0;

        //     for(int j=i;j<n;j++){
        //         if(nums[j] == 0){
        //             CntZero++;
        //         }
        //         if(CntZero > k){
        //             break;
        //         }
        //         MaxLen = max(MaxLen, j-i+1);
        //     }
        // }
        // return MaxLen;

        // Optimal approche o(n)

        int n = nums.size();
        int ZeroCnt = 0;
        int MaxCons = 0;
        int start = 0;

        for(int end=0;end<n;end++){
            if(nums[end] == 0){
                ZeroCnt++;
            }

            if(ZeroCnt > k){
                if(nums[start] == 0){
                    ZeroCnt--;
                }
                start++;
            }
            MaxCons = max(MaxCons, end - start +1);
        }
        return MaxCons;
    }
};