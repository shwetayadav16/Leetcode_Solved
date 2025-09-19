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
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode dummy;
    ListNode* tail = &dummy;
    dummy.next = NULL;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    tail->next = (l1 ? l1 : l2);
    return dummy.next;
}
ListNode*findMiddle(ListNode*head){
  ListNode*slow=head;
  ListNode*fast=head->next;
  while(fast!=NULL&&fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
  }
  return slow;
}

ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode*middle=findMiddle(head);
        ListNode*right=middle->next;
        ListNode*left=head;
        middle->next=NULL;
        left=sortList(left);
        right=sortList(right);
        return mergeTwoLists(left,right);
    }
};