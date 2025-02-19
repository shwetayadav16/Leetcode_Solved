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
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head; // Base case
        
        ListNode* newHead = head->next; // The second node becomes the new head
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr && curr->next) {
            ListNode* next = curr->next;
            curr->next = next->next;
            next->next = curr;
            
            if (prev) prev->next = next; // Connect previous pair with the current
            
            prev = curr;
            curr = curr->next;
        }

        return newHead;
    }
};
