#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        long long ghp, fhp, gk, fk;
        cin >> ghp >> fhp >> gk >> fk;

        // Number of hits to kill each knight
        long long hits_to_kill_flower_knight = fk;
        long long hits_to_kill_gelly_knight = gk;

        // Number of hits to kill each player
        long long hits_to_kill_flower = fhp;
        long long hits_to_kill_gelly = ghp;

        // If Gellyfish's knight kills Flower's knight first or both knights die simultaneously,
        // but Gellyfish has more HP, Gellyfish wins.
        if (hits_to_kill_flower_knight <= hits_to_kill_gelly_knight && ghp > 0) {
            cout << "Gellyfish\n";
        }
        else {
            cout << "Flower\n";
        }
    }

    return 0;
}
