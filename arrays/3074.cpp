class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int cnt = 0;
        int total = 0;
        sort(capacity.begin(),capacity.end());
        reverse(capacity.begin(),capacity.end());
        for(int i=0;i<apple.size();i++){
            total += apple[i];
        }
        for(int i=0;i<capacity.size();i++){
            if(total>0){
                total -= capacity[i];
                cnt++;
            }
        }
        return cnt;
    }
};