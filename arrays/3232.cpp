#include <iostream>
#include <vector>

using namespace std;

/**
 * Determines if Alice can win by choosing either single-digit or double-digit numbers.
 * Alice wins if the sum of her chosen group strictly differs from the other group's sum.
 *
 * @param nums  Input array of integers
 * @return      True if Alice can win, false if both groups have equal sums
 */
bool canAliceWin(vector<int>& nums) {
    int singleDigitSum = 0;
    int doubleDigitSum = 0;

    for (int num : nums) {
        if (num < 10) {
            singleDigitSum += num;
        } else {
            doubleDigitSum += num;
        }
    }

    return singleDigitSum != doubleDigitSum;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 10, 11};

    bool result = canAliceWin(nums);

    cout << "Can Alice win: " << (result ? "Yes" : "No") << endl;

    return 0;
}