class Solution {
public:
    string removeStars(string s) {
        // for(int i=0;i<s.length();i++){
        //     if(s[i] == '*'){
        //         if( i > 0){
        //             s.erase(i-1, 2); // pos, len porjonto delete
        //         }
        //         i -=2;
        //     }
        // }
        // return s;

        stack<char> st;

        for(char c : s){
            if(c != '*'){
                st.push(c);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
            }
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};