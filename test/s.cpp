#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        vector<int> a(5);
        for(int i=0;i<5;i++){
            cin>>a[i];
        }


        int totalrating = 0;
        for(int i=0;i<5;i++){
            totalrating+=a[i];
        }

        if(totalrating >= 35){
            cout<< 0 <<endl;
            continue;
        }
        sort(a.begin(), a.end());
        int bribe = 0;
        
        for(int i=0;i<5;i++){
            if(totalrating < 35){
                totalrating+= 10 - a[i];
                bribe+=100;
            }
        }
        cout<<bribe<<endl;
        
    }
    return 0;
}
