class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        // Brute Force 0(n^3)

        // int n = grid.size();
        // int m = grid[0].size();

        // int ans = 0;

        // for(int r=0;r<n;r++){
        //     for(int c=0;c<m;c++){
        //         bool isequal = true;
        //         for(int i=0;i<n;i++){
        //             if(grid[r][i] != grid[i][c]){
        //                 isequal = false;
        //                 break;
        //             }
        //         }
        //         if(isequal){
        //             ans++;
        //         }
        //     }
        // }
        // return ans;

        // Optimal Approche o(n^2)

        int n = grid.size();
        int count = 0;
        map<vector<int>, int> mp; // row stor

        for(int r=0;r<n;r++){
            mp[grid[r]]++;
        }

        for(int c=0;c<n;c++){
            vector<int> tmp; // col stor

            for(int i=0;i<n;i++){
                tmp.push_back(grid[i][c]);
            }
            count+=mp[tmp];
        }
        return count;
    }
};