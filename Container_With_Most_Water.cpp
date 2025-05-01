class Solution {
    public:
        int maxArea(vector<int>& height) {
    
            // brute  approach 0(n2)
            // int n = height.size();
            // int maxWater = 0;
            // for(int i=0; i<n; i++){
            //     for(int j = i+1; j<n; j++){
            //         int w = j - i;
            //         int h = min(height[i], height[j]);
            //         int area = w * h;
            //         maxWater = max(area, maxWater);
            //     }
            // }
            // return maxWater;
            
    
            // TwoPointer 0(n)
            int L = 0;
            int R = height.size()-1;
            int MaxWater;
            while(L<R){
                int w = R - L;
                int h = min(height[L],height[R]);
                int area = (w*h);
                MaxWater = max(area, MaxWater);
                if(height[L] < height[R]){
                    L++;
                }
                else if(height[L] < height[R]){
                    R--;
                }
                else{
                
                    R--;
                }
            }
            return MaxWater;
        }
    };