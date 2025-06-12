class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxsublen = 0;
        
        for(int i=0;i<s.size();i++){
            int hash[225] = {0};
            
            for(int j=i;j<s.size(); j++){
                if(hash[s[j]]==1) break;
                hash[s[j]] = 1; // Mark character as seen
                int len = j - i + 1; // Current substring length
                maxsublen = max(maxsublen, len); // Update max if needed
                
            }
        }
        return maxsublen;
    }
};