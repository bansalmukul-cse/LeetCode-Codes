class Solution {
public:
   
        bool dfs(vector<vector<int>>& graph, int u, vector<bool>& vis, vector<bool>& rec_stack)
    {
        // mark the curr node visited
        
        vis[u] = true;
        
        // push the curr node into active recursion stack
        
        // rec_stack will help us in finding back-edge
        
        // if there will be any back-edge then there will be cycle
        
        rec_stack[u] = true;
        
        // call for adjacent nodes
        
        for(auto v : graph[u])
        {
            if(vis[v] == false)
            {
                if(dfs(graph, v, vis, rec_stack))
                    return true;
            }
            
            // back-edge found
            
            else if(rec_stack[v])
            {
                return true;
            }
        }
        
        // remove the curr node from rec_stack
        
        rec_stack[u] = false;
        
        return false;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        int n = graph.size();
        
        // declare vis and rec_stack array
        
        vector<bool> vis(n, false);
        
        vector<bool> rec_stack(n, false);
        
        // call dfs for every node
        
        for(int u = 0; u < n; u++)
        {
            if(vis[u] == false)
            {
                if(dfs(graph, u, vis, rec_stack))
                    continue;
            }
        }
        
        // the nodes which is not present in recursion stack will be safe node
        
        vector<int> res;
        
        for(int u = 0; u < n; u++)
        {
            if(rec_stack[u] == false)
            {
                res.push_back(u);
            }
        }
        
        return res;
    }
};
