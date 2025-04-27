class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            
        //    int num = 0;
        //    for(int digit : digits){
        //     num = num * 10 + digit;
        //    }
        //    return num+1;
        for (int i = digits.size() - 1; i >= 0; i--) {  // right to left
                if (digits[i] < 9) {
                    digits[i]++;
                    return digits;
                }
                digits[i] = 0;
            }
            
            // যদি সব digit 9 হয় তাহলে এখানে আসবে
            digits.insert(digits.begin(), 1);
            return digits;
            
        }
       
    };