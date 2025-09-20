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
// Condition 
// 1. delete from first
    ListNode* removeElements(ListNode* head, int val) {
        //if(!head) return head;
        ListNode*dummy=new ListNode(-1);
        dummy->next=head;//imprtant step
        ListNode*prev=dummy;
        ListNode*curr=head;
        while(curr!=NULL){
            if(curr->val==val){
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        head=dummy->next;
        delete dummy;
        return head;
    }
};