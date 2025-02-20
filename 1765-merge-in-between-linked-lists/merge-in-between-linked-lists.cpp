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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        // ListNode*temp=list1;
        // ListNode* a_ptr=NULL;
        // for(int i=0;i<a-1;i++){
        //     temp=temp->next;
        // }
        // a_ptr=temp;

        // temp=temp->next;
        // for(int i=a;i<=b;i++){
        //     temp=temp->next;
        // }
        // ListNode* b_ptr=temp;
        // //a ko list2 ke starting se jod diya
        // temp=list2;
        // while(temp->next!=NULL){
        //     temp=temp->next;
        // }
        // temp->next=b_ptr;

        // return list1;
        ListNode* prev = list1;

        for(int i=0; i<a-1; i++){
            prev = prev->next;
        }

        ListNode *curr = prev->next;
        for(int i=a; i<=b; i++){
            curr = curr->next;
        }

        ListNode *temp = list2;
        while(temp->next != NULL){
            temp = temp->next;
        }

        prev->next = list2;
        temp->next = curr;

        return list1;
    }
};