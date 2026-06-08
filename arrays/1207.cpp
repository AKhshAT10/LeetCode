class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int num : arr){
            mpp[num]++;
        }
        unordered_set<int> freq;
        for(auto it : mpp){
            if(freq.count(it.second)){
                return false;
            }
            freq.insert(it.second);
        }
        return true;
    }
};