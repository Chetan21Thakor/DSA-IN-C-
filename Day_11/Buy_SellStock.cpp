#include<iostream>
using namespace std;

int buy_Sell_Stock(int prices[],int n){

    int bestBuy[10000];
    bestBuy[0]=INT_MAX;

    for (int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
    }

    int maxProfit=INT_MIN;

    for(int i=1;i<n;i++){
        int currProfit=prices[i]-bestBuy[i];
        maxProfit=max(currProfit,maxProfit);
    }

    return maxProfit;
}



int main(){

    int prices []={7,1,3,5,6,4};
    int n=sizeof(prices)/sizeof(int);

    cout<<buy_Sell_Stock(prices,n);
}
