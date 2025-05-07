class Solution {
    public: 
        set<vector<int>> s;
    
        void getallComintations(vector<int>& arr, int tar, int i, vector<vector<int>> &ans, vector<int> &combin) {
            if (tar == 0) {
                if (s.find(combin) == s.end()) {
                    ans.push_back(combin);
                    s.insert(combin);
                }
                return;
            }
    
            if (tar < 0 || i >= arr.size()) return;
    
            // Include arr[i]
            combin.push_back(arr[i]);
            getallComintations(arr, tar - arr[i], i + 1, ans, combin);
            combin.pop_back();
    
            // Exclude arr[i] and skip duplicates
            int j = i + 1;
            while (j < arr.size() && arr[j] == arr[i]) {
                j++;
            }
            getallComintations(arr, tar, j, ans, combin);
        }
    
        vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
            vector<vector<int>> ans;
            vector<int> combin;
            sort(arr.begin(), arr.end());
            getallComintations(arr, target, 0, ans, combin);
            return ans;
        }
    };
    