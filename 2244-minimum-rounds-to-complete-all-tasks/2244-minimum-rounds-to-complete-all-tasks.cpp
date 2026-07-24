class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mpp;
        for(int num : tasks){
            mpp[num]++;
        }
        int output = 0;
        for(auto freq : mpp){
            if(freq.second == 1){
                return -1;
            }
            if(freq.second%3==0){
                output += freq.second/3;
            }else{
                output += freq.second/3+1;
            }
        }
        return output;
    }
};