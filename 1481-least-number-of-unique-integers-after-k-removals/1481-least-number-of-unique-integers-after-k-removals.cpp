class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mpp;
        vector<int> vec;
        int cnt = 0;
        for(int num : arr){mpp[num]++;}
        for(auto num : mpp){
            vec.push_back(num.second);
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            if(k>vec[i]){
                k-=vec[i];
                vec[i]=0;
            }
            else{
                vec[i]-=k;
                k=0;
            }
            if(vec[i]!=0){cnt++;}
        }
        return cnt;
    }
};