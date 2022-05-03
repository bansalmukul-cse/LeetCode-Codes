
class Solution {
public:
    int numSquares(int n) {
        unordered_set<int> visited;
        queue<int> q;
        q.push(0);
        visited.insert(0);
        int res=1;
        while(!q.empty()){
            int siz = q.size();
            while(siz--){
                int src = q.front();
                q.pop();
                for(int i=0;i*i<=n;i++){
                    int dest = src+ i*i;
                    if(dest == n)
                        return res;
                    if(dest<n && visited.find(dest)== end(visited)){   
                        q.push(dest);
                        visited.insert(dest);
                    }
                }
            }
            res++;
            
        }
        return -1;
    }
};
