class Solution {
public:

    string reorganizeString(string s) {
        int n = s.size();
        vector<int> countFeq(26, 0);
        for(int i=0;i<n;i++){
            countFeq[s[i] - 'a']++; // all character ferq count

            if(countFeq[s[i] - 'a'] > (n+1)/2){
                return "";
            }
        }
        priority_queue<pair<int,char>, vector<pair<int,char>>> pq; // maxHeap like -> a , 3
        // b, 2 
        // c, 1
        
        for(int i = 0;i<26;i++){
            if(countFeq[i] > 0){
                pq.push({ countFeq[i],(char)(i + 'a')});
            }
        }
        string res = "";
        while(pq.size() >= 2 ){ // two element pop then add res then if char num an exist agin push pq;
            auto p1 = pq.top();
            pq.pop();
            auto p2 = pq.top();
            pq.pop();

            res+=p1.second; p1.first --;
            res+=p2.second; p2.first --;

            if(p1.first > 0){
                pq.push(p1);
            }
            if(p2.first > 0){
                pq.push(p2);
            }

        }
        if(!pq.empty()){
            auto c =pq.top();
            res+=c.second;
        }
        return res;
    }
};