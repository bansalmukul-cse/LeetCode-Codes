class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> answer;
        vector<pair<double,vector<int>>> distances;
        for(auto i:points){
            double distance=sqrt(pow(i[0],2)+pow(i[1],2));
            distances.push_back(make_pair(distance,i));
        }
        sort(distances.begin(),distances.end());
        for(int i=0;i<k;i++)answer.push_back(distances[i].second);
        return answer;
    }
};

