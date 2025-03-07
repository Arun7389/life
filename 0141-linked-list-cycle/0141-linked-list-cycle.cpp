/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return false;
        ListNode *slow = head, *fast = head;
        while (fast != nullptr && fast->next != NULL) {

            slow = slow->next;
            if (fast->next != NULL) {
                fast = fast->next->next;
            } else {
                return false;
            }

            if (slow == fast)
                return true;
        }

        return false;
    }
};