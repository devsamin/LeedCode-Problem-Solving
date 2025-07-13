class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int ans = 0;

        for(int r=0;r<n;r++){
            for(int c=0;c<m;c++){
                bool isequal = true;
                for(int i=0;i<n;i++){
                    if(grid[r][i] != grid[i][c]){
                        isequal = false;
                        break;
                    }
                }
                if(isequal){
                    ans++;
                }
            }
        }
        return ans;
    }
};