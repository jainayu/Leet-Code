/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr){
            return nullptr;
        }
        Node* current = head;
        Node* newHead = nullptr;
        Node* newPrev = nullptr;
        unordered_map<Node*, Node*> uMap;
        
        while(current != nullptr){
            Node* newNode = new Node(current->val);
            newNode->random = current->random;
            
            if(newPrev != nullptr){
                newPrev->next = newNode;
            } else {
                newHead = newNode;
            }
            uMap[current] = newNode;
            newPrev = newNode;
            current = current->next;
        }
        
        Node* newCurr = newHead;
        
        while(newCurr != nullptr){
            if(newCurr->random != nullptr){
                Node* node = uMap[newCurr->random];
                newCurr->random = node;
            }
            newCurr = newCurr->next;
        }
        
        return newHead;
    }
};
