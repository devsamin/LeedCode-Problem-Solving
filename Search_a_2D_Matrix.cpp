class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int tar) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int sr = 0;
        int er = m -1;
        while(sr <= er){
            int existingrowMid = sr +(er - sr)/2;

            if(matrix[existingrowMid][0] <= tar && tar <= matrix[existingrowMid][n-1]){
                // agin need to binary search this particular row
                int s = 0;
                int e = n - 1;
                while(s <= e){
                    int m = s + (e - s)/2;
                    if(matrix[existingrowMid][m] == tar){
                        return true;
                    }
                    else if(matrix[existingrowMid][m] < tar){
                        s = m + 1;
                    }
                    else{
                        e = m - 1;
                    }
                }
                return false;

            }
            if(matrix[existingrowMid][n-1] < tar){
                sr = existingrowMid + 1;
            }
            if(matrix[existingrowMid][0] > tar){
                er = existingrowMid - 1;
            }
        }
        return false;
    }
};
// log(m*n)