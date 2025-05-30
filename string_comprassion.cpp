class Solution {
public:
    int compress(vector<char>& ch) {
        int n = ch.size();
        int idx = 0;
        for(int i=0;i<n;i++){
            char currentCH = ch[i];
            int cnt = 0;

            while(i < n && ch[i] == currentCH){
                cnt++;
                i++;
            }
            if(cnt == 1){
                ch[idx++] = currentCH;
            }
            else{
              ch[idx++] = currentCH;
              string sstr = to_string(cnt);
              for(int c : sstr){
                ch[idx++] = c;
              }  
            }
            i--;
        }
        return idx;
    }
};