class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int mini1 = prices[0];
        int mini2 = prices[1];
        if(mini1+mini2 > money){
            return money;
        }
        else return (money - (mini1+mini2));
    }
};