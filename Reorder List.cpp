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
    void reorderList(ListNode* head) {
         vector<ListNode*> a;
        while(head!=NULL){
            a.push_back(head);
            head=head->next;
        }
        ListNode* start = new ListNode(0);
        int l=0,r=a.size()-1;
        while(l<=r){
            start->next = a[l];
            if(l<r) a[l]->next = a[r];
            start = a[r];
            l++;
            r--;
        }
        r++;
        a[r]->next = nullptr;
    }
};
