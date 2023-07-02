class Solution {
public:
    int maxProfit(vector<int>& a) {
        int minSoFar = a[0];
        int maxProfit = 0;
        for(int i=0; i<a.size(); i++){
            minSoFar = min(minSoFar, a[i]);
            int profit = a[i] - minSoFar;
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
    }
};