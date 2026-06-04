#include <vector>
#include <cmath>

using namespace std;

/**
 * Finds two indices i and j in the array such that:
 *   - abs(i - j) >= indexDifference
 *   - abs(nums[i] - nums[j]) >= valueDifference
 *
 * @param nums             Input array of integers
 * @param indexDifference  Minimum required index gap
 * @param valueDifference  Minimum required value gap
 * @return                 Vector {i, j} if found, otherwise {-1, -1}
 */
vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            bool indexCondition = abs(i - j) >= indexDifference;
            bool valueCondition = abs(nums[i] - nums[j]) >= valueDifference;

            if (indexCondition && valueCondition) {
                return {i, j};
            }
        }
    }

    return {-1, -1};
}

int main() {
    vector<int> nums = {5, 1, 4, 1};
    int indexDifference = 2;
    int valueDifference = 4;

    vector<int> result = findIndices(nums, indexDifference, valueDifference);

    printf("Result: [%d, %d]\n", result[0], result[1]);

    return 0;
}