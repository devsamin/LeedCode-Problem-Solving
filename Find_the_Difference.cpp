class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> m;
        for(auto a:s){
            m[a]++;
        }
        for(auto a:t){
            m[a]--;
            if(m[a] < 0){
                return a;
            }
        }
        return '?';
    }
};