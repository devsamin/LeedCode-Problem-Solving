class Solution {
    public:
        bool areOccurrencesEqual(string s) {
            map<int,int> equal;
            for(char c : s){
                equal[c]++;
            }
            int count = equal.begin()->second;
            for(auto pair : equal){
                if(pair.second != count){
                    return false;
                }
            }
            return true;
        }
    };