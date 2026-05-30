#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> vec(2 * n);

    for (int i = 0; i < n; i++) {
        vec[2 * i] = nums[i];
        vec[2 * i + 1] = nums[n + i];
    }

    return vec;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(2 * n);

    for (int i = 0; i < 2 * n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = shuffle(nums, n);

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}