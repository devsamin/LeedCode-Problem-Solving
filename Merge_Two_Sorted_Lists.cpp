/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2 == NULL){
            return list1;
        }
        vector<int> v;
        while(list1 != NULL){
            v.push_back(list1->val);
            list1 = list1->next;
        }
        while(list2 != NULL){
            v.push_back(list2->val);
            list2 = list2->next;
        }

        sort(v.begin(), v.end());
        ListNode* tmp = new ListNode();
        ListNode* head = tmp;
        for(int c : v){
            head->next = new ListNode(c);
            head = head->next;
        }
        return tmp->next;
    }
};