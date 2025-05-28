class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        onordered_map<int, int> dupli;
        for(int val : nums){
            dupli[val]++;
        }
        for(auto du : dupli){
            if(du.second > 1){
                return du.first;
            }
        }
        return -1;

    }
};