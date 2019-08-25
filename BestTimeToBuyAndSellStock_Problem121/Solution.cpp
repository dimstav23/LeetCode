class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0)
            return 0;
        int buy = prices[0];
        int maxPr = 0;
        int prev = 0;
        int next = 0;
        
        while (next<prices.size())
        {
            if (prices[next] < buy)
            {
                buy = prices[next];
                prev = next;
            }
            else 
            {
                if (prices[next] - buy > maxPr)
                {
                    maxPr = prices[next]-buy;                    
                }                
            }
            next++;
        }
        
        return maxPr;
    }
};
