#include<stdio.h>

void main(){
    int boxCars;
    scanf("%d",&boxCars);
    float boxWeights[boxCars],totalWeight=0;
    for (int i = 0; i < boxCars; i++)
    {
        float weight;
        scanf("%f",&weight);
        boxWeights[i] = weight;
        totalWeight += weight;
    }
    int balance = totalWeight/boxCars;
    for (int j = 0; j < boxCars; j++)
    {
        printf("%.1f\n", (balance-boxWeights[j]));
    }
    
    
}