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
    void helper(ListNode* h1, ListNode* h2, int &carry){
        if(h1->next!=NULL and h2->next!=NULL)
            helper(h1->next, h2->next, carry);
            
        h1->val=(h1->val+h2->val+carry);
        carry=(h1->val)/10;
        h1->val%=10;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int s1=0, s2=0, carry=0;
        
        ListNode* temp=l1;
        
        while(temp!=NULL){
            s1++;
            temp=temp->next;
        }
        
        temp=l2;
        
        while(temp!=NULL){
            s2++;
            temp=temp->next;
        }
        
        if(s1>s2){
            while(s1>s2){
                ListNode* newNode=new ListNode(0);
                newNode->next=l2;
                l2=newNode;
                s2++;
            }
        }
        else if(s1<s2){
            while(s1<s2){
                ListNode* newNode=new ListNode(0);
                newNode->next=l1;
                l1=newNode;
                s1++;
            }
        }
            
        helper(l1,l2,carry);
        
        if(carry==0)
            return l1;
        
        ListNode* newNode=new ListNode(1);
        newNode->next=l1;
        return newNode;
            
        
    }
};
