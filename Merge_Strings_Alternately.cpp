class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int idx = 0;
        while(idx < word1.length() && idx < word2.length()){
            ans+=word1[idx];
            ans+=word2[idx];
            idx++;
        }
        while(idx< word1.length()){
            ans+=word1[idx];
            idx++;
        }
        while(idx< word2.length()){
            ans+=word2[idx];
            idx++;
        }
        return ans;
    }
};