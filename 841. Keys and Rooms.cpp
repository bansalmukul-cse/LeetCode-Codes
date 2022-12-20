class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        //using BFS jo chjaabi milti jaye use queue mein dalte jao and udhsr pop krte se visited mein update false ko true krna h
        int n = rooms.size();
        vector<bool> visited(n,false);
        queue<int>q;
        q.push(0);
        visited[0] = true;
        while(!q.empty()){
            int room =  q.front();
            q.pop();
            for(auto key: rooms[room]){
                if(!visited[key]){
                    visited[key] = true;
                    q.push(key);
                }
            }
        }
        for(auto i:visited){
            if(i == false){
                return false;
            }
        }
        return true;
    }
};
