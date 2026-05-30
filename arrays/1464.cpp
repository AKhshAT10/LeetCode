#include <iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int>& nums) {
    int maxi = nums[0];
    int ans = 0;

    for (int i = 1; i < nums.size(); i++) {
        ans = max(ans, (nums[i] - 1) * (maxi - 1));
        maxi = max(maxi, nums[i]);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << maxProduct(nums) << endl;

    return 0;
}