#include <iostream>
#include <vector>

using namespace std;

/**
 * Counts the number of "good pairs" in the array.
 * A pair (i, j) is good if nums[i] == nums[j] and i < j.
 *
 * @param nums  Input array of integers
 * @return      Total count of good pairs
 */
int numIdenticalPairs(vector<int>& nums) {
    int count = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 3, 1, 1, 3};

    int result = numIdenticalPairs(nums);

    cout << "Number of good pairs: " << result << endl;

    return 0;
}