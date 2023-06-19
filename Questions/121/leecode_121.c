int maxProfit(int* prices, int pricesSize){

    // the minimum price encountered so far,
    int minPrice = prices[0];

    // the maximum profit that can be achieved.
    int maxProfit = 0;

    //iteration start from 1
    for(int i = 1;i<pricesSize;i++)
    {
        // check the price if low than before
        if(minPrice > prices[i])
        {
            minPrice = prices[i];
        }
        // check the maxProfit if high then before
        else if( (prices[i] - minPrice) > maxProfit)
        {
            maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
}