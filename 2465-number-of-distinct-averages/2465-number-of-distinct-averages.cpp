class Solution {
public:
    int distinctAverages(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    float avg = 0;
    vector<float> vec;
    int cnt = 0;
    int i = 0;
    int j = n - 1;
    while (i < j) {
        avg = (nums[i] + nums[j]) / 2.0;
        vec.push_back(avg);
        i++;
        j--;
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i + 1 < vec.size(); i++) {
        if (vec[i] != vec[i + 1]) {
            cnt++;
        }
    }
    return cnt + 1;
}
};