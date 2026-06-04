#include <iostream>
#include <vector>

using namespace std;

/**
 * Finds the integer that was added to every element of nums1 to get nums2.
 * Computed as the average difference across all element pairs.
 *
 * @param nums1  Original array of integers
 * @param nums2  Modified array with a constant integer added to each element
 * @return       The integer that was added
 */
int addedInteger(vector<int>& nums1, vector<int>& nums2) {
    int totalDifference = 0;
    int pairCount = 0;

    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            totalDifference += (nums2[j] - nums1[i]);
            pairCount++;
        }
    }

    return totalDifference / pairCount;
}

int main() {
    vector<int> nums1 = {2, 6, 4};
    vector<int> nums2 = {9, 7, 5};

    int result = addedInteger(nums1, nums2);

    cout << "Added integer: " << result << endl;

    return 0;
}