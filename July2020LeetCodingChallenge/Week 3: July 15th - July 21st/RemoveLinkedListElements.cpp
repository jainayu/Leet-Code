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
 
// Solution 01

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prevNode;
        ListNode* node;
        prevNode = NULL;
        node = head;
        while(node!=NULL){
            if(node->val == val){
                if(prevNode == NULL){
                    head = head->next;
                } else {
                    prevNode->next = node->next;
                }
            } else {
                prevNode = node;
            }
            node = node->next;
        }
        return head;
    }
};

// Solution 02

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return NULL;
        head->next = removeElements(head->next, val);
        return head->val == val ? head->next : head;
    }
};
