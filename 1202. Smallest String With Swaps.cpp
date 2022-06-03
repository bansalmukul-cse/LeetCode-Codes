// Implementation of Disjoint Set (Union-Find)
class DisjointSet{
    
    vector<int> parent, rank;
    int nodes_count;

public:
    
    // Disjoint Set Constructor
    DisjointSet(int nodes_count){
        
        this->nodes_count = nodes_count;
        
        parent = vector<int>(nodes_count,-1);
        for(int n=0; n<nodes_count; n++) parent[n] = n;
        
        rank = vector<int>(nodes_count, 0);
    }
    
    // Find parent node using path compression.
    int Find(int node){
        
        if(parent[node] == node)
            return node;
        
        return parent[node] = Find(parent[node]);
    }
    
    // Union nodes by rank
    void Union(int node1, int node2){
        
        int node1_parent = Find(node1),
            node2_parent = Find(node2);
        
        if(rank[node1_parent] == rank[node2_parent]){
            parent[node2_parent] = node1_parent;
            rank[node1_parent]++;
        }
        else if(rank[node1_parent] < rank[node2_parent])
            parent[node1_parent] = node2_parent;
        else 
            parent[node2_parent] = node1_parent;
        
    }    
};

class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        
        DisjointSet disjoint_set(s.size());
        
        // Grouping the indices which can be swapped;
        for(vector<int> pair : pairs){
               disjoint_set.Union(pair[0], pair[1]);
        }
        
        // Map to store the sorted characters for each group.
        // Group_Parent(int) -> Sorted_Characters(PQ)
        unordered_map<int, 
                      priority_queue<char, 
                                     vector<char>, 
                                     greater<char>>> grouped_indices;
        int group_parent = -1;
        
        // Push characters to the corresponding group.
        for(int node=0; node<s.size(); node++){
            group_parent = disjoint_set.Find(node);
            grouped_indices[group_parent].push(s[node]);
        }
        
        // Pop characters from each node's group and place in the same node's index.
        for(int node=0; node<s.size(); node++){
            group_parent = disjoint_set.Find(node);
            
            // Pop a character from current node's group 
            // And place it at the current node's index.
            s[node] = grouped_indices[group_parent].top();
            grouped_indices[group_parent].pop();
        }
        
        return s;
    }
};
