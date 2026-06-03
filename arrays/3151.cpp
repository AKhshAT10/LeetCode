#include <iostream>
#include <vector>
using namespace std;

bool isArraySpecial(vector<int>& nums) {
    if (nums.size() == 1) {
        return true;
    }

    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] % 2 == nums[i + 1] % 2) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};

    if (isArraySpecial(nums)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}