class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<pair<float,int>>v;
        for(int i=0;i<speed.size();i++){
            v.push_back({(dist[i]*1.0)/speed[i],i});
        }  
        sort(v.begin(),v.end());
        int count=0,time=0;
        for(int i=0;i<dist.size();i++){
            if(time<v[i].first){
                time++;
                count++;
            }
            else break;
        }
        return count;
    }
};