#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "race a car";
    string ans = "";
    for(char c: s){
        if(c >= 'A' && c <= 'Z' || c>='a' && c<='z' || 
            (c >= '0' && c <= '9')){
            ans+=towlower(c);
        }
    }
    // cout<<ans<<endl;
    int l = 0;
    int r = ans.size()-1;
    bool flag = true;
    while(l<r){
        if(ans[l] != ans[r]){
            flag = false;
        }
        else{
            l++;
            r--;
        }
        
    }
    if(flag){
        cout<<"palindirom";
    }
    else{
        cout<<"no";
    }

    return 0;
}
