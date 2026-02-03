//485 max consecutive ones
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current = 0;
        int maxCount = 0;

        for (int no = 0; no < nums.size(); no++) {
            if (nums[no] == 1) {
                current++;
                maxCount = max(maxCount, current);
            } else {
                current = 0;
            }
        }
        return maxCount;
    }
};
