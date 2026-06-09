class Solution {
public:
    int maximum69Number (int num) {
        vector<int> vec;
        while(num > 0){
            vec.push_back(num%10);
            num /= 10;
        }
        reverse(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            if(vec[i]==6){
                vec[i] = 9;
                break;
            }
        }
        int newNum = 0;
        for(int digit : vec){
            newNum = newNum*10 + digit;
        }
        return newNum;
    }
};