class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
        unordered_set<int> set2;
        for(auto x : nums1){
            set1.insert(x);
        }
        for(auto x : nums2){
            set2.insert(x);
        }
        vector<int> ans(2,0);
        for(auto x : nums1){
            ans[0] += set2.count(x);
        }
        for(auto x : nums2){
            ans[1] += set1.count(x);
        }
        return ans;
    }
};