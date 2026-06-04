#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Transforms the array by replacing each element with 0 if even, 1 if odd,
 * then sorts the result in ascending order (all 0s before all 1s).
 *
 * @param nums  Input array of integers
 * @return      Transformed and sorted array of 0s and 1s
 */
vector<int> transformArray(vector<int>& nums) {
    for (int& num : nums) {
        num = (num % 2 == 0) ? 0 : 1;
    }

    sort(nums.begin(), nums.end());

    return nums;
}

int main() {
    vector<int> nums = {3, 1, 2, 4, 7};

    vector<int> result = transformArray(nums);

    cout << "Transformed array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}