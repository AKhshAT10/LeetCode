//3379 transformed array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums){
        int n = nums.size();
        vector<int> result(n);
        for(int no = 0; no < n; no++){
            result[no] = nums[((no + nums[no]) % n + n) % n];
        }
        return result;
    }
};
