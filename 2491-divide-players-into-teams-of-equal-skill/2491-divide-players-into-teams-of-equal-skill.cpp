class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long chem = 0;
        long long target = skill[0] + skill[skill.size()-1];
        for(int i=0;i<skill.size()/2;i++){
                if(skill[i]+skill[skill.size()-i-1]!=target){
                    return -1;
                }
                chem += (skill[i]*skill[skill.size()-i-1]);
            }
        return chem;
    }
};