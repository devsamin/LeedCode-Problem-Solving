class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            // brute force approch time complexity 0(n2)
            // int n = nums.size();
    
            // vector<bool> visited(n, false);
            // for(int i=0;i<n;i++){
            //     if(visited[i]==true){
            //         continue;
            //     }
                
            //     int count = 1;
            //     for(int j=i+1; j<n;j++){
            //         if(nums[i] == nums[j]){
            //              visited[i] = true;
            //              count++;
            //         }
            //     }
            //     if(count > n/2){
            //         return nums[i];
            //     }
            // }
            // return -1;
    
            
    
            // Optimal approch 0(nlogn)
    
            int n = nums.size();
            sort(nums.begin(), nums.end());
            int freq = 1;
            int ans = nums[0];
            for(int i=1;i<n;i++){
                if(nums[i] == nums[i-1]){
                    freq++;
                }
                else{
                    freq = 1;
                    ans = nums[i];
                }
    
                if(freq > n/2){
                    return ans;
                }
            }
            return ans;
        }
    };