class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {

        // Brute force approach
        
        // int n = arr.size();
        // if(n < 1 || k==1){
        //     return arr;
        // }
        
        // vector<int> ans;
        // for(int i=0;i<=n -k;i++){
        //     int maxs = arr[i];
        //     for(int j= i+1; j<k+i; j++){
        //        maxs = max(maxs, arr[j]);
                
        //     }
        //     ans.push_back(maxs);
        // }
        // return ans;

        // Optimal approach o(n)

        deque<int> dq;
        vector<int> ans;

        // 1st window
        for(int i=0;i<k; i++){
            while(!dq.empty() && arr[dq.back()] <= arr[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        // then k to step by step all window
        for(int i=k; i<arr.size(); i++){
            ans.push_back(arr[dq.front()]);

            // remove not part of current window
            while(dq.size() > 0 && dq.front() <= i - k){
                dq.pop_front();
            }

            // then remove smaller element and find the max value in window
            while(!dq.empty() && arr[dq.back()] <= arr[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(arr[dq.front()]); 

        return ans;
    }
};