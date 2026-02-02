#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> mpp(nums.size()+1,-1);
        for(int no=0;no<nums.size();no++){
            mpp[nums[no]] = nums[no];
        }
        for(int no=0;no<mpp.size();no++){
            if(mpp[no]==-1) return no;
        }
        return 0;
    }
};
View less
 
