#include<stdio.h>

void main(){
    int population,infected=1,days=1;
    scanf("%d", &population);
    while(population > infected){
        infected = infected+(infected*2);
        days = days + 1;
    }
    printf("%d",days);
}