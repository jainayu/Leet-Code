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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr){
            return l2;
        } else if(l2 == nullptr){
            return l1;
        }
        
        ListNode* sortedHead = nullptr;
        if(l1->val <= l2->val){
            sortedHead = l1;
            l1 = l1->next;
        } else {
            sortedHead = l2;    
            l2 = l2->next;
        }
        
        ListNode* sortedTail = sortedHead;
        
        while(l1 != nullptr && l2 != nullptr){
            ListNode* temp = nullptr;
            if(l1->val <= l2->val){
                temp = l1;
                l1 = l1->next;
            } else {
                temp = l2;
                l2 = l2->next;
            }
            sortedTail->next = temp;
            sortedTail = temp;
        }
        
        if(l1 != nullptr){
            sortedTail->next = l1;
        } else if(l2 != nullptr){
            sortedTail->next = l2;
        }
        return sortedHead;
    }
};
