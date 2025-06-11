class Solution {
public:
    bool isPalindrome(string s){
        string s2 = s;
        reverse(s.begin(), s.end());
        return s == s2;
    }
    void getAllpartsion(string s, vector<vector<string>> &ans, vector<string> &partsion){
        if(s.size()== 0){
            ans.push_back(partsion);
            return;
        }
        for(int i=0;i<s.length();i++){
            string part = s.substr(0, i+1);
            if(isPalindrome(part)){
                partsion.push_back(part);
                getAllpartsion(s.substr(i+1), ans, partsion);
                partsion.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partsion;
        getAllpartsion(s, ans, partsion);
        return ans;
    }
};