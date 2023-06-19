int maxProfit(int* prices, int pricesSize){
        int maxProfit = 0;
        
        for(int i=1;i<pricesSize;i++)
        {
                // cal the diff of everyday
                if(prices[i]>prices[i-1])
                maxProfit += prices[i]-prices[i-1];
        }
        return maxProfit;
}