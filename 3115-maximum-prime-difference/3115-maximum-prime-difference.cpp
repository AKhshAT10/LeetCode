class Solution {
public:
    bool isPrime(int n){
        if(n<=1) return false;
        if(n<=3) return true;
        if(n%2==0 || n%3==0) return false;
        for(int i=5;i<=n/i;i+=6){
            if(n%i==0 || n%(i+2)==0) return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int> vec;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(isPrime(nums[i])==true){
                vec.push_back(i);
            }            
        }
        ans = vec[vec.size()-1]-vec[0];
        return ans;
    }
};