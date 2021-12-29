#include<stdio.h>

void main(){
    int count;
    char first[100], last[100];
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%s%s",&first,&last);
        printf("%s %s\n",&last,&first);
    }
    
}