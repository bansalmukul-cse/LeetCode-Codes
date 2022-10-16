class Solution {
public:
    vector<int>ans;
    bool dfs(int s,vector<vector<int>> &adj,vector<bool> &visited,vector<bool>&recs){
        visited[s] = true;
        recs[s] = true;
        
        for(auto x:adj[s]){
            if(!visited[x]){
                if(dfs(x,adj,visited,recs)){
                    return true;
                }
                
            }
            else if(recs[x])
                return true;
        }
        recs[s]= false;
        ans.push_back(s);
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        
        vector<vector<int>>adj(n,vector<int>());
        
        for(auto x:prerequisites){
            adj[x[0]].push_back(x[1]);
        }
        
        vector<bool>visited(n,false);
        vector<bool>recs(n,false);
        
        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(dfs(i,adj,visited,recs)){
                    return {};
                }
            }
        }
        return ans;
    }
};
