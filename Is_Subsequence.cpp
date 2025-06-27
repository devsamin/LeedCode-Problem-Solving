class Solution {
public:
    // bool isvalid(string s, char c){
    //     for(char ch : s){
    //         if(ch == c){
    //             return true;
    //         }
    //     }
    //     return false;
    // }
    bool isSubsequence(string s, string t) {
        // string IsSub = "";
        // for(char ch : t){
        //     if(isvalid(s,ch)){
        //         IsSub+=ch;
        //     }
        // }
        // if(s == IsSub){
        //     return true;
        // }
        // return false;
        int i=0;
        int j =0;
        while(i < s.size()  && j < t.size() ){
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }
        return i == s.size();
    }
};