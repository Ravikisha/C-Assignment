#include<stdio.h>

void main(){
    int populatedCity = 0,numOfCities = 0;
    scanf("%d",&numOfCities);
    for (int i = 0; i < numOfCities; i++)
    {
        int cityPopulation;
        scanf("%d",&cityPopulation);
        if(cityPopulation > 10000){
            populatedCity++;
        }
    }
    printf("%d",populatedCity);
}