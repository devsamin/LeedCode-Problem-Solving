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
        ListNode* middleNode(ListNode* head) {
    
            // brut force approch
    
            // ListNode* tmp = head;
            // int size = 0;
            // while(tmp != NULL){
            //     size++;
            //     tmp = tmp->next;
            // }
    
            // for(int i=0;i<size/2; i++){
            //     head = head->next;
            // }
            // return head;
    
            // Optimal approch
    
            ListNode* slow = head;
            ListNode* first = head;
    
            while(first != NULL && first->next != NULL){
                slow = slow->next;
                first = first->next->next;
            }
            return slow;
    
        }
    };