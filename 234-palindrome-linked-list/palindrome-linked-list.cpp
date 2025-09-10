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
ListNode*reverseLL(ListNode*node){
    // if(node==NULL||node->next==NULL) return node;
    ListNode*curr=node;
    ListNode*prev=NULL;
    ListNode*temp;
    while(curr!=NULL){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;

}
    bool isPalindrome(ListNode* head) {
        if(head==NULL&&head->next==NULL) return true;
        // Three step:
        //1.Find the middle node
        //2.Reversing the half LL
        //3.Comparing the LL
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*newHead=reverseLL(slow->next);
        ListNode*first=head;
        ListNode*second=newHead;
        while(second!=NULL){
            if(first->val!=second->val){
                reverseLL(newHead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reverseLL(newHead);
        return true;
    }
};