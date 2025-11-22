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

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;

        Node* curr = head;

        // 1️⃣ Insert cloned nodes after each original node
        while (curr) {
            Node* clone = new Node(curr->val);
            clone->next = curr->next;
            curr->next = clone;
            curr = clone->next;
        }

        // 2️⃣ Set random pointers of cloned nodes
        curr = head;
        while (curr) {
            if (curr->random) {
                curr->next->random = curr->random->next;  
            }
            curr = curr->next->next;
        }

        // 3️⃣ Separate the two linked lists
        curr = head;
        Node* newHead = head->next;
        while (curr) {
            Node* clone = curr->next;
            curr->next = clone->next;
            if (clone->next)
                clone->next = clone->next->next;
            curr = curr->next;
        }

        return newHead;
    }
};
