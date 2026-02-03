//1869 longest contiguous segments of ones than zeroes
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool checkZeroOnes(string s) {
        int zeroes = 0;
        int ones = 0;
        int max_ones = 0;
        int max_zeroes = 0;

        for (int no = 0; no < s.size(); no++) {
            if (s[no] == '1') {
                ones++;
                zeroes = 0;
                max_ones = max(max_ones, ones);
            } else {
                zeroes++;
                ones = 0;
                max_zeroes = max(max_zeroes, zeroes);
            }
        }
        return max_ones > max_zeroes;
    }
};
