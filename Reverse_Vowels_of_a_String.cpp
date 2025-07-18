class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        while(i<j){
            // move i forword until vowle found
            while(i<j && vowels.find(s[i]) == vowels.end()){
                i++;
            }
            // move j backword until vowle found
            while(i<j && vowels.find(s[j]) == vowels.end()){
                j--;
            }
            if(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};