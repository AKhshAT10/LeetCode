class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ws = 0;
        int we = 0;
        int cnt = 0;
        int sum = 0;
        int avg = 0;
        while(we<arr.size()){
            while(we-ws+1<=k){
                sum += arr[we];
                we++;
            }
            avg = sum/k;
            if(avg>=threshold){
                cnt++;
            }
            sum -= arr[ws];
            ws++;
        }
        return cnt;
    }
};