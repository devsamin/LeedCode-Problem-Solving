class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int> s2;

        for(int a : nums1){
            s1.insert(a);
        }
        for(int a : nums2){
            s2.insert(a);
        }

        vector<int> ans1;
        vector<int> ans2;

        for(int a : s1){
            if(s2.find(a) == s2.end()){
                ans1.push_back(a);
            }
        }
        for(int a : s2){
            if(s1.find(a) == s1.end()){
                ans2.push_back(a);
            }
        }
        return {ans1,ans2};



        
    }
};