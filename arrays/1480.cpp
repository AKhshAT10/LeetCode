#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    vector<int> result;
    int sum = 0;

    for (int num : nums) {
        sum += num;
        result.push_back(sum);
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = runningSum(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}