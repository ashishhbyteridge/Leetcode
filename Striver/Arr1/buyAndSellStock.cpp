class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0, i = 0, j = 1, n = prices.size();
        while(i < n && j < n){
            if(i == j) j++;
           else if(prices[j] - prices[i] > 0){
                mx = max(mx, prices[j] - prices[i]);
                j++;
            }
            else{ i = j ;}
        }
        return mx;
    }
};