#include<stdio.h>
void main(){
    int basePrice = 10,price = 0,timeHour;
    scanf("%d",&timeHour);
    if(timeHour > 0 && timeHour < 12){
        if(timeHour == 0){
            price = basePrice;
        }else{
            price = basePrice + (timeHour*5);
        }
    }else{
        printf("Invalid Time.");
    }
    if (price > 53)
    {
        price = 53;
    }
    printf("%d",price);
    
}