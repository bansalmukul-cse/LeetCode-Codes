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
        int v1=0,v2=0,sum=0,carry=0;
        ListNode* sumhead = new ListNode(-1);
        ListNode* ptr= sumhead;
        while(l1 != NULL || l2 != NULL){
            if(l1 != NULL){
                v1=l1->val;
                l1=l1->next; 
            }
            else v1=0;
            if(l2 != NULL){
                v2=l2->val;
                l2=l2->next; 
            }
            else v2=0;
            sum = v1+v2+ carry;
            carry=sum/10;
            sum = sum%10;
            ListNode* temp = new ListNode(sum);
            ptr->next= temp;
            ptr=ptr->next;
        }
        if(carry!=0){
            ListNode* temp = new ListNode(carry);
            ptr->next= temp;
        }
        return sumhead->next;
    }
};
