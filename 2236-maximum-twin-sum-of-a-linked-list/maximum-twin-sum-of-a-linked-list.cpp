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
    int pairSum(ListNode* head) {
        vector<int>vec;
        ListNode*temp=head;
        while(temp!=NULL){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        int j=vec.size()-1;
        int maxVal=INT_MIN;
        while(i<j){
            if(maxVal<vec[i]+vec[j]){
                maxVal=vec[i]+vec[j];
            }
            i++;
            j--;
        }
        return maxVal;
    }
};