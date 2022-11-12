class Solution {
public:
    
    bool dfs(int s,vector<bool>&visited,vector<bool>&currVis,vector<int>adj[]){
        visited[s] = true;
        currVis[s] = true;
        vector<int> data = adj[s];
        for(auto x:data){
            if(!visited[x]){
                if(dfs(x,visited,currVis,adj)){
                    return true;
                }
                
            }
            else if(visited[x] && currVis[x]){
                return true;
            }
        }
        currVis[s]= false; //reset the visited node tro check another cycle or not
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<bool>visited(n,false);
        vector<bool>currVis(n,false);
        
        vector<int>adj[n];
        for(auto x:prerequisites){
            vector<int>data =x;
            int a = data[0];
            int b = data[1];
            adj[a].push_back(b);
        }
        
        
        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(dfs(i,visited,currVis,adj)){
                    return false;  //if there is cycle it will not complete at all so return false
                }
            }
        }
        return true;
    }
};
