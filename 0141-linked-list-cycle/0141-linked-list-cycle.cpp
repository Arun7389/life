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
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            if (fast->next != NULL) {
                fast = fast->next->next;
            } else {
                return false;
            }

            if (slow == fast) {
                //cout << slow->val << " " << fast->val << endl;
                return true;
            }
        }

        return false;










        /*
        //two pointers
        ListNode* pointer1 = head; //slow one
        ListNode* pointer2 = head; //fast one
        
        while (pointer1 != NULL && pointer2 != NULL) {
            pointer1 = pointer1->next;
            if (pointer2->next != NULL) {
                pointer2 = pointer2->next->next;
                if (pointer1 == pointer2) {
                    return true;
                }
            } else {
                break;
            }
        }
        return false;
        */
    }
};