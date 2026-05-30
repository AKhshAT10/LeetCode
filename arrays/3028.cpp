#include <iostream>
#include <vector>
using namespace std;

int returnToBoundaryCount(vector<int>& nums) {
    int sum = 0;
    int cnt = 0;

    for (int num : nums) {
        sum += num;

        if (sum == 0) {
            cnt++;
        }
    }

    return cnt;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << returnToBoundaryCount(nums) << endl;

    return 0;
}