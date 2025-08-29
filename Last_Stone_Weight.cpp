class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1) {
            sort(stones.begin(), stones.end()); // প্রতি বার sort করবো

            int n = stones.size();
            int x = stones[n-1];     // সবচেয়ে বড়
            int y = stones[n-2];     // দ্বিতীয় বড়

            stones.pop_back(); // remove biggest
            stones.pop_back(); // remove second biggest

            if(x != y) {
                stones.push_back(x - y); // যদি সমান না হয় তাহলে নতুন পাথর যোগ করবো
            }
        }

        if(stones.empty()) return 0;
        return stones[0];
    }
};
