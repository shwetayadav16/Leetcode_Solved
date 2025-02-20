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
    ListNode* mergeInBetween(ListNode* List1, int a, int b, ListNode* List2) {
        ListNode*temp=List1;
        for(int i=0;i<a-1;i++){
            temp=temp->next;
        }
        ListNode* a_ptr=temp;
        for(int i=a-1;i<b;i++){
            temp=temp->next;
        }
        ListNode* b_ptr=temp;
        temp=List2;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        a_ptr->next=List2;
        temp->next=b_ptr->next;
        return List1;
    }
};