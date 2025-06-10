class Solution {
public:
    string commonstring(string s1, string s2){
        int n = min(s1.length(), s2.length());
        string ans = "";
        for(int i=0;i<n;i++){
            if(s1[i] == s2[i]){
                ans.append(s1[i]);
            }
            else{
                break;
            }
        }
        return ans;
    } 
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];

        for(int i = 1;i<n;i++){
            res = commonstring(res, strs[i]);
        }
        return res;
        
    }
};