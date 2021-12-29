#include<stdio.h>
#include<string.h>

void main(){
    char text[50];
    int size = 0,status_code = 0;
    scanf("%s",&text);
    while (text[size]!='\0'){
        size++;
    }
    int mid = (size / 2)+1;
    for (int z = 0; z < size; z++)
    {
        if (text[z] != 't' || text[z] != 'T')
        {
            status_code = -1;
        }
    }
    for (int i = 0; i < mid; i++)
    {
        if (text[i] == 't' || text[i] == 'T')
        {
            status_code = 1;
            break;
        }
        
    }
    for (int j = mid; j < size; j++)
    {
        if (text[j] == 't' || text[j] == 'T')
        {
            status_code = 2;
            break;
        }
        
    }
    printf("%d",status_code);
    
    
}