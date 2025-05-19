class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // int n = nums.size();
        // vector<vector<int>> ans;
        // set<vector<int>> unique;
        // sort(nums.begin(), nums.end());

        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             for(int l=k+1;l<n;l++){
        //                 long long sum = 1ll * nums[i]+nums[j]+nums[k]+nums[l];
        //                 if(sum == target){
        //                     vector<int> quad = {nums[i], nums[j], nums[k], nums[l]};
        //                     if(unique.find(quad) == unique.end()){
        //                         unique.insert(quad);
        //                         ans.push_back(quad);
        //                     }
                            
                            
        //                 }
        //             }
        //         }
        //     }
        // }

        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        if(n < 1) return ans;
        for(int i=0;i<n;i++){
            if(i > 0 && nums[i] == nums[i -1]) continue;
            for(int j=i+1;j<n;j++){
                if(j > i + 1 && nums[j] == nums[j-1]) continue;
                
                int p = j+1;
                int q = n-1;

                while(p < q){
                    long long sum = 1ll * nums[i] + nums[j] + nums[p] + nums[q];
                    if(sum == target){
                        vector<int> quad = {nums[i], nums[j], nums[p], nums[q]};
                        ans.push_back(quad);
                        p++;
                        q--;
                        if(nums[j] == nums[j+1]) j++;
                        while(p < q && nums[p] == nums[p-1]) p++;
                    }
                    else if(sum < target){
                        p++;
                    }
                    else{
                        q--;
                    }
                    
                }
            }
        }




        return ans;
    }
};