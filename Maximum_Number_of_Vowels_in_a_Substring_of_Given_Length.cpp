class Solution {
public:
    int maxVowels(string s, int k) {
        // unordered_set<char> vowel = {
        //     'a','e','i','o','u','A','E','I','O','U',
        // };
        // int maxVowel = INT_MIN;
        // for(int i=0;i<=s.length() -k;i++){
        //     int countVowel = 0;
        //     for(int j=i;j<i+k;j++){
        //         if(vowel.count(s[j])){
        //             countVowel++;
        //         }
        //     }
        //     maxVowel = max(maxVowel, countVowel);
        // }
        // return maxVowel;

        // Optimal Approche o(n) sliding window technic

        unordered_set<char> vowel = {
            'a','e','i','o','u','A','E','I','O','U',
        };
        int valCount = 0;
        int MaxVowel = INT_MIN;

        for(int i=0;i<k;i++){
            if(vowel.count(s[i])){
                valCount++; // Frist step k time loop and vowel count
            }
        }
        MaxVowel = valCount;
        for(int i=k;i<s.size();i++){
            if(vowel.count(s[i])){
                valCount++;
            }
            if(vowel.count(s[i-k])){
                valCount--;
            }
            MaxVowel = max(MaxVowel, valCount);
        }
        return MaxVowel;

    }
};