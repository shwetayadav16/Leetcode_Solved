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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head||!head->next) return head;
        ListNode*temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(k>count) return head;
        temp=head;
        ListNode*first=NULL;
        ListNode*second=NULL;
        for(int i=0;i<k;i++){
            first=temp;
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<=count-k;i++){
            second=temp;
            temp=temp->next;
        }
        swap(first->val,second->val);
        return head;
    }
};