#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int digitSum(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int minElement(vector<int>& nums) {
    int min_el = INT_MAX;

    for (int num : nums) {
        int sum = digitSum(num);
        min_el = min(min_el, sum);
    }

    return min_el;
}

int main() {
    vector<int> nums = {10, 12, 13, 14};

    cout << "Minimum digit sum: " << minElement(nums) << endl;

    return 0;
}