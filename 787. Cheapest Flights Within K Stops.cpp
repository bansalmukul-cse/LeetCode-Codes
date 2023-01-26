class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
       priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> q;  //min heap,values in form {price,node_val,k}
        //create an adjacency list first to traverse
        vector<vector<int>> arr[n];    //values in form -> arr[from]={to,price}
        for(auto f:flights){
            arr[f[0]].push_back({f[1],f[2]});
        }
        q.push({0,src,0});                       //push the source node
        int breaks[n];                           //it is the array used to store the number of stops required to reach the node
        memset(breaks,102,sizeof(breaks));       //initialize it to max value
        while(!q.empty()){
            vector<int> v = q.top();
            int cost = v[0],node = v[1],stop = v[2];
            q.pop();
            if(node==dst)  return cost;
          
            if(stop<breaks[node] && stop<=k){ 
                breaks[node]=stop;
                for(auto x:arr[node]){
                     q.push({cost+x[1],x[0],stop+1});
                } 
            }
        }
        return -1;
        
    }
};
