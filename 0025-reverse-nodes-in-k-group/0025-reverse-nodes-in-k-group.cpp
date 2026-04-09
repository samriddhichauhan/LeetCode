class Solution {
public:
    ListNode* reverse(ListNode* head, int k) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (k-- && curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        for (int i = 0; i < k; i++) {
            if (!temp) return head;
            temp = temp->next;
        }
        ListNode* newHead = reverse(head, k);
        head->next = reverseKGroup(temp, k);
        return newHead;
    }
};
