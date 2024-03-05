/* Author : Chaitaly Kundu
   Date : 25-09-2021*/

#include<iostream>
using namespace std;


class Best_time_to_buy_and_sell {
public:
    int maxProfit(int prices[], int n) {

        int profit = 0;

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int diff = prices[j]-prices[i];
                if(diff>profit)
                    profit = diff;
            }
        }
        return profit;
    }
};

int main(){

    int n = 3;
    int a[n] = {900,1000,1050};

    Best_time_to_buy_and_sell obj;


    cout << obj.maxProfit(a,n);

    return 0;
}