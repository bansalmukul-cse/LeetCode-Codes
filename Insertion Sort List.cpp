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
    ListNode* insertionSortList(ListNode* head) {
        vector<int> v;
        ListNode* temp= head;
        while(temp){
            v.push_back(temp->val);
            temp =  temp->next;
        }
        sort(v.begin(),v.end());
        ListNode* dummy = new ListNode(1),*curr =  dummy;
        for(int i=0;i<v.size();i++){
            ListNode* new_node = new ListNode(v[i]);
            curr->next = new_node;
            curr = curr->next;
        }
        return dummy->next;
    }
};
