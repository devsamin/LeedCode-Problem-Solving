class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        set<int> k;
        vector<int> x;
        vector<int> y;
        for(int a : nums1){
            if(s.find(a)== s.end()){
                s.insert(a);
                x.push_back(a);
            }
        }
        for(int a : nums2){
            if(k.find(a)== k.end()){
                k.insert(a);
                y.push_back(a);
            }
        }
        vector<int> ans;
        for(int i=0;i<x.size();i++){
            for(int j=0;j<y.size();j++){
                if(x[i] == y[j]){
                    ans.push_back(x[i]);
                }
            }
        }
        return ans;
    }
};