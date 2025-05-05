class Solution {
    public:
        bool isAlpanum(char c){
            if(c >= 'A' && c <= 'Z' || c>='a' && c<='z'|| 
            (c >= '0' && c <= '9')){
                return true;
            }
            return false;
        }
        bool isPalindrome(string s) {
        //     if(s == ""){
        //         return true;
        //     }
        //     string ans = "";
        //     for(char c:s){
        //         if(c >= 'A' && c <= 'Z' || c>='a' && c<='z'|| 
        // (c >= '0' && c <= '9')){
        //         ans+=towlower(c);
        //     }
        //     }
        //     int l=0;
        //     int r=ans.size()-1;
        //     while(l<r){
        //         if(ans[l] != ans[r]){
        //             return false;
        //         }
        //         l++;
        //         r--;
        //     }
        //     return true;
    
        // 0(n)
    
        int l = 0;
        int r = s.length()-1;
    
        while(l < r){
            if(!isAlpanum(s[l])){
                l++;
                continue;
            }
            if(!isAlpanum(s[r])){
                r--;
                continue;
            }
            if(towlower(s[l]) != towlower(s[r])){
                return false;
            }
            l++; r--;
        }
        return true;
    
    
        }
    };