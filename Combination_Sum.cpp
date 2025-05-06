class Solution {
    public:
        set<vector<int>> s;
        void getallCombinationSum(vector<int>& arr, int tar, int i, vector<vector<int>> &ans,vector<int> &combin){
    
            // baseCase
            if(i == arr.size() || tar < 0){
                return;
            }
            if(tar == 0){
                if(s.find(combin) == s.end()){
    
                    ans.push_back(combin);
                    s.insert(combin);
                }
                return;
            }
    
            // Include current element (single or multiple times)
            combin.push_back(arr[i]);
            getallCombinationSum(arr, tar - arr[i], i + 1, ans, combin); // Single use
            getallCombinationSum(arr, tar - arr[i], i, ans, combin);     // Multiple use
            combin.pop_back();
    
            // Exclude current element
            getallCombinationSum(arr, tar, i + 1, ans, combin);
        }
        vector<vector<int>> combinationSum(vector<int>& arr, int target) {
            vector<vector<int>> ans;
            vector<int> combin;
    
            getallCombinationSum(arr, target, 0, ans, combin);
            return ans;
        }
    };