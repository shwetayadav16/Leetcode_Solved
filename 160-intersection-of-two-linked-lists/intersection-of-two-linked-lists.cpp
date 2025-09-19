/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
//conditions:
//when they have no intersection point
//they have --2 case--a. same length b. diff length
//when starting point is intersection means headA=headB
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*tempA=headA;
        ListNode*tempB=headB;
        while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;
            if(tempA==tempB) return tempA;//any Node or NULL--this is true
            if(tempA==NULL) tempA=headB;
            if(tempB==NULL) tempB=headA;
        }
        return tempA;
    }
};