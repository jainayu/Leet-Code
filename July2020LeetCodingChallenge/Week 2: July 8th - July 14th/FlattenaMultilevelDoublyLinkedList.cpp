/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* node = head;
        while (node) {
            if (node->child) {
                Node* nextNode = node->next;
                node->next = node->child;
                node->next->prev = node;
                node->child = NULL;
                Node* tempNode = node->next;
                while (tempNode->next) {
                    tempNode = tempNode->next;
                }
                tempNode->next = nextNode;
                if (nextNode) nextNode->prev = tempNode;
            }
            node = node->next;
        }
        return head;      
    }
};
