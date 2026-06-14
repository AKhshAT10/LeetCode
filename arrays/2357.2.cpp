class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       unordered_map<int,int> mpp;
       int cnt = 0;
       for(int i=0;i<nums.size();i++){
          mpp[nums[i]]++;
       }
       for(auto it : mpp){
          if(it.first != 0){
            cnt++;
          }
       }
       return cnt;
    }
};