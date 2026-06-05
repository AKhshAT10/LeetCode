class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int cnt = 0;
        int i=0;
        int j=0;
        int max = 0;
        while(i<arr.size() && j<arr.size()){
            if(arr[i]==arr[j]){
                cnt++;
                j++;
                if(cnt > arr.size()/4){
                    return arr[i];
                }
            }
            else i++,j++;
        }
       return 0;
    }
};