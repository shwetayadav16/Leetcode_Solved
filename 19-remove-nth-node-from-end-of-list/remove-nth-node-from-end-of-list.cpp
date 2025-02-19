
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return NULL;
        ListNode*temp=head;
        int count=0;
        
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if (n == count) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        temp=head;
        for(int i=0;i<count-n-1;i++){
            temp=temp->next;
        }
        ListNode*to_delete=temp->next;
        temp->next=temp->next->next;
        delete to_delete;
        return head;
    }
};