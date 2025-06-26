class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // Brute Force o(n^2)

        // int n = nums.size();
        // int maxOperation = 0;
        // vector<bool> visited(n, false);
        // for(int i=0;i<n;i++){
        //     if(visited[i] == true) continue;
        //     for(int j=i+1;j<n;j++){
        //         if( !visited[j] && nums[i] + nums[j] == k){
        //             maxOperation++;
        //             visited[i] = true;
        //             visited[j] = true;
        //             break; // pair found i move 
        //         }
        //     }
        // }
        // return maxOperation;

        // Optimal approche o(n)

        int MaxOperation = 0;
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums.size() - 1;
        while(l<r){
            if(nums[l] + nums[r] == k){
                MaxOperation++;
                l++;
                r--;
            }
            else if(nums[l] + nums[r] < k){
                l++;
            }
            else{
                r--;
            }
        }
        return MaxOperation;
    }
};