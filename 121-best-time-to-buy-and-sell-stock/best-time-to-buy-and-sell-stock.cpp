class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) return 0;  

        int bestBuy = prices[0];   
        int bestGain = 0;          

        
        for (int day = 1; day < (int)prices.size(); ++day) {
            int todayPrice = prices[day];

            
            int candidateProfit = todayPrice - bestBuy;
            if (candidateProfit > bestGain) {
                bestGain = candidateProfit;
            }

            
            if (todayPrice < bestBuy) {
                bestBuy = todayPrice;
            }
        }

        return bestGain;
    }
};
