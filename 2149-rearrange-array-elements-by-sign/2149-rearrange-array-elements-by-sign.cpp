class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> vec1,vec2,ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                vec1.push_back(nums[i]);
            }else{
                vec2.push_back(nums[i]);
            }
        }
        int i = 0;
        int j = 0;
        while(j<nums.size()/2){
            ans.push_back(vec1[i]);
            i++;
            ans.push_back(vec2[j]);
            j++;
        }
        return ans;
    }
};