#include <iostream>
#include <vector>
using namespace std;

int averageValue(vector<int>& nums) {
    int sum = 0;
    int cnt = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 6 == 0) {
            sum += nums[i];
            cnt++;
        }
    }

    if (cnt == 0) {
        return 0;
    }

    return sum / cnt;
}

int main() {
    vector<int> nums = {1, 3, 6, 10, 12, 15};

    cout << averageValue(nums) << endl;

    return 0;
}  