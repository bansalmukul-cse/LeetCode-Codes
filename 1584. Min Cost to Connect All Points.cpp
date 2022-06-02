class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
       int n=points.size(),sum=0,i=0,con=0;
        vector<bool>v(n);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        while(++con<n)
        {
            v[i]=true;
            for(int j=0;j<n;j++)
                if(!v[j])
                    p.push({(abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1])),j});
            while(v[p.top().second])
                p.pop();
            sum+=p.top().first;
            i=p.top().second;
            p.pop();
        }
        return sum;  
    }
};
