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
ListNode*swap(ListNode*head){
    if(head==NULL||head->next==NULL) return head;
    ListNode* next=head->next;
    head->next=next->next;
    next->next=head;
    head=next;
    next=next->next;
    next->next=swap(next->next);
    return head;
}
    ListNode* swapPairs(ListNode* head) {
        return swap(head);
    }
};