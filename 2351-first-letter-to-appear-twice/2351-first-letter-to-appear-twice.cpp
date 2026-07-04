class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> mpp;
        for(char i=0;i<s.size();i++){
            mpp[s[i]]++;
            if(mpp[s[i]]==2){
                return s[i];
            }
        }
        return -1;
    }
};