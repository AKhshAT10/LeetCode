#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < k) {
                cnt++;
            }
        }

        return cnt;
    }
};

int main() {
    vector<int> nums = {2, 11, 10, 1, 3};
    int k = 10;

    Solution obj;
    int result = obj.minOperations(nums, k);

    cout << "Minimum Operations: " << result << endl;

    return 0;
}