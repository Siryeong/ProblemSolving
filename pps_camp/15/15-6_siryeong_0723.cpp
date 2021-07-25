class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = 1000000;
        int re=0;
        for(int i = 0; i < prices.size(); i++){
            re = re > (prices[i]-min) ? re : (prices[i]-min);
            if(prices[i] < min)
                min = prices[i];
        }
        return re;
    }
};