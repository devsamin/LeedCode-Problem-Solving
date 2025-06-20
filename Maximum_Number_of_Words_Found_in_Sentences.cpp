class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int mx = 0;
        for(auto s : sen){
            int count = 0;
            stringstream ss(s);
            string word;

            while(ss >> word){
                count++;
            }
            mx = max(mx, count);
           
        }
        return mx;
        
    }
};