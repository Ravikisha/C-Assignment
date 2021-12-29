#include<stdio.h>

void main(){
    float ingredientPrice[10],ingredientWeight[10],costPrice=0;
    int numOfItems;
    scanf("%d",&numOfItems);
    for(int i=0;i<numOfItems;i++){
        scanf("%f",&ingredientPrice[i]);
    }
    for(int j=0;j<numOfItems;j++){
        scanf("%f",&ingredientWeight[j]);
    }
    for (int k = 0; k < numOfItems; k++)
    {
        costPrice = costPrice + (ingredientPrice[k]*ingredientWeight[k]);
    }
    printf("%.6f",costPrice);
}