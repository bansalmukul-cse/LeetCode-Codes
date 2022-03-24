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
    ListNode* rotateRight(ListNode* head, int k) {
         if(head==NULL)
            return head;
        int len=1;
        ListNode* cur=head;
        while(cur->next!=NULL){
            cur=cur->next;
            len++;
        }
        cur->next=head;
        k=k%len;
        cur=head;
        for(int i=0;i<len-1-k;i++){
            cur=cur->next;
        }
        ListNode* res=cur->next;
        cur->next=NULL;
        return res;
    
    }
};
