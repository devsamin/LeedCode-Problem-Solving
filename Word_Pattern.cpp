class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> word;
        stringstream ss(s);
        int countWord = 0;
        string a;
        while(ss >> a){
            word.push_back(a);
            countWord++;
        }
        int n = pattern.length();
        if(n != countWord){
            return false;
        }
        unordered_map<string, char> mp;
        set<char> used;

        for(int i=0;i<n;i++){
            if(mp.find(word[i]) == mp.end() && used.find(pattern[i]) == used.end()){
               mp[word[i]] = pattern[i];
                used.insert(pattern[i]);
            }
            else if(mp[word[i]] != pattern[i]){
                return false;
            }
        }
        return true;
    }
};