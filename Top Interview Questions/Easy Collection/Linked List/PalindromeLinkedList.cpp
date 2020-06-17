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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *prev = head;
        ListNode *second_part = head;
        ListNode *mid = NULL;
        if(head != NULL && head->next != NULL){
            while(fast != NULL && fast->next != NULL){
                fast = fast->next->next;
                prev = slow;
                slow = slow->next;
            }
            if (fast != NULL) { 
                mid = slow; 
                slow = slow->next; 
            } 
            second_part = slow;
            prev->next = NULL;
            ListNode *last = reverseList(second_part);
            ListNode *first = head;

            while(first && last){
                if(first->val == last->val){
                    first = first->next;
                    last = last->next;
                }else{
                    return false;
                }
            }
            if(first==NULL && last==NULL){
                return true;
            }
            return false;
        }
        return true;
    }
};
