#include<stdio.h>

void main(){
    int realnum,guessnum,numOfTries=1;
    scanf("%d",&realnum);
    while(1){
        scanf("%d",&guessnum);
        if(guessnum > realnum){
            printf("it is more\n");
        }else if(guessnum < realnum){
            printf("it is less\n");
        }else{
            break;
        }
        numOfTries++;
    }
    printf("Number of tries needed: \n");
    printf("%d",numOfTries);
}