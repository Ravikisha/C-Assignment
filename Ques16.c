#include<stdio.h>

void main(){
    int range;
    char word[100];
    scanf("%d%s",&range,&word);
    for(int i=0;i<range;i++){
        printf("%s\n",word);
    }
}