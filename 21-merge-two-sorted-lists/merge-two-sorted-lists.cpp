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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*dummyNode=new ListNode(-1);
        ListNode*temp=dummyNode;
        while(list1!=NULL&&list2!=NULL){
            if(list1->val<list2->val){
                //just add the node
                temp->next=list1;
                temp=list1;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                temp=list2;
                list2=list2->next;
            }
        }
        //agar list1 ya list2 mein se kuch bhi bacha hai toh usko add kardo ek hi baar mein
        if(list1) temp->next=list1;
        else temp->next=list2;
        return dummyNode->next;
    }
};