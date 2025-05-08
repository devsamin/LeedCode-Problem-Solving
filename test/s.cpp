#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, hp;
        cin >> n >> hp;
        
        int minTime = INT_MAX;  // Initialize to a very large value
        double best_efficiency = INT_MAX; // For tracking the best weapon efficiency
        
        for (int i = 0; i < n; i++) {
            int s, d;
            cin >> s >> d;
            
            // Calculate the time per unit damage for the current weapon
            double efficiency = (double)s / d;
            
            // We need to track the weapon with the best efficiency
            if (efficiency < best_efficiency) {
                best_efficiency = efficiency;
                // Calculate how many hits are required for this weapon to defeat the boss
                int hits = (hp + d - 1) / d;
                minTime = hits * s;
            }
        }
        
        cout << minTime << endl;
    }
    
    return 0;
}
