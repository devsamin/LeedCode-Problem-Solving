class Solution {
public:
    bool isValid(string S) {
        stack<char> s;
        for(char c: S){
            if(c == '(' || c == '{' || c == '['){
                s.push(c);
            }
            else{
                if(s.empty()){
                return false;
            }
            else{
                // else{
                char ans = s.top(); 
                if(ans == '(' && c == ')' || ans == '{' && c == '}' || ans == '[' && c == ']'){
                    s.pop();
                }
                else{
                    return false;
                }
                
            // }
            }
            }
        }
        if(!s.empty()){
            return false;
        }
        return true;
        
    }
};