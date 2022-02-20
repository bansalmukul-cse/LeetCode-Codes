class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int res=0,c=capacity;
        for(int i=0;i<plants.size();i++)
        {
          if(plants[i]>capacity)
          {
              capacity=c;
              res=res+2*i+1;
          }
           else
           res=res+1;
          capacity-=plants[i];
        }
        return res;
    }
};
