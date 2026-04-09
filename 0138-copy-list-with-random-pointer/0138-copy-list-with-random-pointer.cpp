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
        if(head == NULL) return NULL;

        // Step 1: Create copy nodes in between
        Node* temp = head;
        while(temp) {
            Node* copy = new Node(temp->val);
            copy->next = temp->next;
            temp->next = copy;
            temp = copy->next;
        }

        // Step 2: Assign random pointers
        temp = head;
        while(temp) {
            if(temp->random)
                temp->next->random = temp->random->next;
            temp = temp->next->next;
        }

        // Step 3: Separate original and copied list
        temp = head;
        Node* dummy = new Node(0);
        Node* copyTail = dummy;

        while(temp) {
            Node* copy = temp->next;
            copyTail->next = copy;
            copyTail = copy;

            temp->next = copy->next; // restore original list
            temp = temp->next;
        }

        return dummy->next;
    }
};