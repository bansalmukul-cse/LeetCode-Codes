/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // this map points to the clone of the original node
        map<Node*,Node*> mp;
        
        Node* temp=head;
        
        // 1st Pass - Creation of Nodes and no wiring
        while(temp!=NULL)
        {
            // Pointing the original node to its clone node
            // Now I can access the clone node in O(1)
            mp[temp] = new Node(temp->val);
            temp=temp->next;
            
        }
        
        // 2nd pass - Filling the next and random pointers
        temp=head;
        
        while(temp!=NULL)
        {
            // mp[ptr] is the clone node and its next is the next original
            // node's clone node. 
            // mp[ptr->next] refers to the clone node of ptr->next;
            mp[temp]->next= mp[temp->next]; 
            
            // similar thing for the random pointer
            mp[temp]->random=mp[temp->random];
            
            temp=temp->next;
        }
        
        return mp[head];
    }
};
