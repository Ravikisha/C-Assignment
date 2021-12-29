#include<stdio.h>

void main(){
    int totalexpenses=0,expenses=0;
    while (1)
    {
        scanf("%d",&expenses);
        if(expenses==-1){
            break;
        }
        totalexpenses+=expenses;
    }
    printf("%d",totalexpenses);
    
}