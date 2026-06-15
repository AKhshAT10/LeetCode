class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int totald = 0;
        int clockw = 0;
        int anticlockw = 0;
        int minvalue = 0;
        if(start<destination){
            for(int i=start;i<destination;i++){
                clockw += distance[i];
            }
        }
        else if(start>destination){
            for(int i=destination;i<start;i++){
                clockw += distance[i];
            }
        }
        for(int i=0;i<distance.size();i++){
            totald += distance[i];
        }
        anticlockw = totald - clockw;
        minvalue = min(clockw,anticlockw);
        return minvalue;
    }
};