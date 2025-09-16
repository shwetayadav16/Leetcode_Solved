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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode*temp1=l1;
        ListNode*temp2=l2;
        ListNode*dummy=new ListNode(0);
        ListNode*temp3=dummy;
        while(temp1!=NULL&&temp2!=NULL){
            int sum=temp1->val+temp2->val+carry;
            carry=sum/10;
            temp3->next= new ListNode(sum%10);
            temp3=temp3->next;

            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=NULL){
            int sum=temp1->val+carry;
            carry=sum/10;
            temp3->next= new ListNode(sum%10);
            temp3=temp3->next;

            temp1=temp1->next;
        }
        while(temp2!=NULL){
            int sum=temp2->val+carry;
            carry=sum/10;
            temp3->next= new ListNode(sum%10);
            temp3=temp3->next;

            temp2=temp2->next;
        }
        if(carry>0){
            temp3->next=new ListNode(carry);
        }
        return dummy->next;
    }
};