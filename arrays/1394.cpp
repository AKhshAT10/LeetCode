#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findLucky(vector<int>& arr) {
    unordered_map<int, int> mpp;

    for (int num : arr) {
        mpp[num]++;
    }

    int lucky = -1;

    for (int i = 1; i <= mpp.size(); i++) {
        if (mpp[i] == i) {
            lucky = i;
        }
    }

    return lucky;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findLucky(arr) << endl;

    return 0;
}