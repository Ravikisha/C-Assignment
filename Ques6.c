#include<stdio.h>

void main(){
    int height,numOfLeaflets;
    scanf("%d%d",&height,&numOfLeaflets);
    if(height <= 5 && numOfLeaflets >= 8){
        printf("Tinuviel");
    }else if(height >= 10 && numOfLeaflets >= 10){
        printf("Calaelen");
    }else if(height <= 8&&numOfLeaflets <= 5){
        printf("Falarion");
    }
    else if(height >= 12 && numOfLeaflets <= 7){
        printf("Dorthonion");
    }else{
        printf("Uncertain");
    }
}