class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr = dummy;

        while (curr->next && curr->next->next) {
            ListNode* first = curr->next;
            ListNode* second = curr->next->next;

            // swap first and second
            first->next = second->next;
            second->next = first;
            curr->next = second;

            // move curr ahead by 2
            curr = first;
        }

        return dummy->next;
    }
};
