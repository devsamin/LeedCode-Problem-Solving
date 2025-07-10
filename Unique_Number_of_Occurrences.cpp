class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int a : arr){
            m[a]++;
        }

        set<int> s;
        for(auto&[k,v] : m){
            if(s.find(v) != s.end()){
                return false;
            }
                s.insert(v);
            
        }
        return true;
    }
};