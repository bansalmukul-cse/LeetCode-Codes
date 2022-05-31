class UndergroundSystem {
public:
    unordered_map<string,pair<double,int>> avg;
unordered_map<int,pair<string,int>> info;

void checkIn(int id, string stn, int t) {
    info[id]={stn,t};
}
void checkOut(int id, string stn, int t) {
    string name=info[id].first+" "+stn;
    double interval=t-info[id].second;
    avg[name].first+=interval;
    avg[name].second++;
}
double getAverageTime(string from, string to) {
    string name=from+" "+to;
    return avg[name].first/avg[name].second;
}
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
