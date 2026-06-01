#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int cnt = 0;

        for (int i = 0; i < hours.size(); i++) {
            if (hours[i] >= target) {
                cnt++;
            }
        }

        return cnt;
    }
};

int main() {
    vector<int> hours = {0, 1, 2, 3, 4};
    int target = 2;

    Solution obj;
    int result = obj.numberOfEmployeesWhoMetTarget(hours, target);

    cout << "Employees who met target: " << result << endl;

    return 0;
}