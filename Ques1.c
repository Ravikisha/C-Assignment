#include <stdio.h>

void main(){
    int passenger;
    float gas,cost;
    scanf("%d %f", &passenger, &gas);
    if (passenger == 0)
    {
        cost = gas;
        printf("%.2f\n", cost);
    }else
    {
        cost = (gas + 1) / (passenger + 1);
        printf("%.2f\n", cost);
    }
}