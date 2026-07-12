class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       vector<int> temp = arr;
       sort(temp.begin(),temp.end());
       unordered_map<int,int> mpp;
       for(int x : temp){
           if(!mpp.count(x)){
               mpp[x] = mpp.size()+1;
           }
       }
       for(int& x : arr){
           x = mpp[x];
       }
       return arr;
    }
};