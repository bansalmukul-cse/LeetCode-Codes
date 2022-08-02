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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dm1 = new ListNode(0);
        ListNode* dm2 = new ListNode(0);
        ListNode* leftCurr = dm1;
        ListNode* rightCurr = dm2;
        
        while(head != NULL){
            if(head -> val < x){
                leftCurr->next = head;
                leftCurr = head;
            }
            else {
                rightCurr->next=head;
                rightCurr = head;
            }
            head=head->next;
        }
        
        leftCurr->next = dm2->next;
        rightCurr->next = NULL;
        return dm1->next;
    }
};
