class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int min1 = 0;
        int min2 = 0;
        vector<int> vec;
        sort(nums.begin(),nums.end());
        priority_queue<int> heap;
        for(int i=0;i<nums.size();i++){
            heap.push(nums[i]);
        }
        while(!heap.empty()){
            min1 = heap.top();
            heap.pop();
            min2 = heap.top();
            heap.pop();
            vec.push_back(min2);
            vec.push_back(min1);
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};