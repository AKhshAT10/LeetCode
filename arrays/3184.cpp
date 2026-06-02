#include <iostream>
#include <vector>
using namespace std;

int countCompleteDayPairs(vector<int>& hours) {
    int cnt = 0;

    for (int i = 0; i < hours.size(); i++) {
        for (int j = 1; j < hours.size(); j++) {
            if ((hours[i] + hours[j]) % 24 == 0 && i < j) {
                cnt++;
            }
        }
    }

    return cnt;
}

int main() {
    vector<int> hours = {12, 12, 30, 24, 24};

    cout << countCompleteDayPairs(hours) << endl;

    return 0;
}