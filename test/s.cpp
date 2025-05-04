#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input); // read full line including spaces

    stringstream ss(input);
    string word;
    vector<string> wordss;

    while (ss >> word) {
        wordss.push_back(word);
    }

    // for(string s : wordss){
    //     printf(s);
    // }

    for(int i=wordss.size()-1; i>=0; i--){
        cout<<(wordss[i]);
        if(i > 0){
            cout<<" ";
        }
    }
    

    return 0;
}
