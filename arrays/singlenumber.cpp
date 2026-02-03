//136 single number
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> answer;

        for (int no = 0; no < nums.size(); no++) {
            answer[nums[no]]++;
        }

        for (auto no : answer) {
            if (no.second == 1) {
                return no.first;
            }
        }
        return 0;
    }
};
