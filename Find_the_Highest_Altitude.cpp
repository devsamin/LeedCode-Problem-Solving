class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int current = 0;
        int maxAl = 0;
        for(int i=0;i<n;i++){
            current+=gain[i];
            maxAl = max(maxAl, current);
        }
        return maxAl;
    }
};