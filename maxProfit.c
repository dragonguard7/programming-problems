/*
	Given an array of integers and once chance to buy and sell,
	what is the largest profit possible? You must buy first
	before selling and can only buy and sell once.
	
	Example 1:
		Input: [7, 1, 5, 3, 6, 4]
		Output: 5
	Example 2:
		Input: [7, 6, 4, 3, 1]
		Output: 0

*/
int maxProfit(int* prices, int pricesSize) {
    int i, lowest = 0, buy = prices[0], sell = prices[0];
    for(i = 0; i < pricesSize; i++){
        if(prices[i] < buy){
            lowest = lowest > sell - buy ? lowest: sell-buy;
            buy = prices[i];
            sell = 0;
        }
        if(prices[i] > sell){
            sell = prices[i];
        }
    }

    return lowest < (sell - buy) ? sell-buy : lowest;
    
}