#include<stdio.h>

void main(){
    int age,luggageWeight,cost;
    scanf("%d%d",&age,&luggageWeight);
    if(age == 60){
        cost = 0;
    }else if(age < 10){
        cost = 5;
    }else{
        if (luggageWeight > 20)
        {
            cost = 30 + 10;
        }else{
            cost = 30;
        }
    }
    printf("%d",cost);
}