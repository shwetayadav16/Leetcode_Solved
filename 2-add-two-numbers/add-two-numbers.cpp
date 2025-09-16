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

//when a naive coder write the code--i write this comment because after 5 year when i am ceo of company 
//and when remembering this comment and when i open this i feel the pain of writing code as noob
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* dummy = new ListNode(0); // dummy node
        ListNode* curr = dummy; 
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }

        return dummy->next; // skip dummy node
    }
};