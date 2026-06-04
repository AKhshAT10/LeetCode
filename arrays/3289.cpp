#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Finds all "sneaky numbers" — integers that appear exactly twice in the array.
 * Sorts the array first, then detects adjacent duplicates.
 *
 * @param nums  Input array of integers
 * @return      Vector containing all duplicate numbers found
 */
vector<int> getSneakyNumbers(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    vector<int> duplicates;

    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            duplicates.push_back(nums[i]);
        }
    }

    return duplicates;
}

int main() {
    vector<int> nums = {0, 1, 2, 3, 4, 2, 5, 0};

    vector<int> result = getSneakyNumbers(nums);

    cout << "Sneaky numbers: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}