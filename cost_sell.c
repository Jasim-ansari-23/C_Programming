#include<stdio.h>

int main(){
    int cost_price, sell_price, amount;

    printf("Enter the Cost price\n");
    scanf("%d", &cost_price);

    printf("Enter the Sell price\n");
    scanf("%d", &sell_price);

    if(sell_price > cost_price){
        amount = sell_price - cost_price;
        printf("Profit = %d", amount);
    }
    else if(cost_price > sell_price){
        amount = cost_price - sell_price;
        printf("Loss = %d", amount);
    }
    else{
        printf("No profit and No loss");
    }
    return 0;
}