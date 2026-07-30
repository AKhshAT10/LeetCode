class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> heap(nums.begin(),nums.end());
        int max1 = heap.top();
        heap.pop();
        int max2 = heap.top();
        return (max1-1)*(max2-1);
    }
};