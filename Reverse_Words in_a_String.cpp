class Solution {
    public:
        string reverseWords(string s) {
            // 0(n)2
        // stringstream ss(s);
        // string word;
        // string word1="";
        // vector<string> wordss;
    
        // while (ss >> word) {
        //     wordss.push_back(word);
        // }
        // for(int i=wordss.size()-1; i>=0; i--){
        //     // cout<<(wordss[i]) << " ";
        //     word1 += wordss[i];
        //     if (i > 0) word1 += " ";
        // }
        // return word1;
    
        // 0(n)
    
        int n = s.length();
        string ans = "";
    
        reverse(s.begin(), s.end());
    
        for(int i=0;i<n;i++){
            string word = "";
            while(i< n && s[i] != ' '){
                word+=s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            if(word.length() > 0){
                ans+=" "+ word;
            }
        }
        return ans.substr(1);
    
    
        }
    };