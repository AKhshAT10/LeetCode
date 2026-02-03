//389 find the difference 
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for (int no = 0; no < s.size(); no++) {
            if (s[no] != t[no]) 
                return t[no];
        }

        return t[t.size() - 1];
    }
};
