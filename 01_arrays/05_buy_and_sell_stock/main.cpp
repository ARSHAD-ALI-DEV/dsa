// QUESTION NUMBER 121 ON LEETCODE.

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxProfitOnSell(vector<int> prices){
    int maxProfit = 0, bestBuy = prices[0];

    for(int i = 0; i < prices.size(); i++){
        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }

        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfit;
}

int main(){

    vector<int> arr = {7,1,2,3,76};

    cout << maxProfitOnSell(arr);
    return 0;
}