#include <stdio.h>
#include <string.h>
int main()
{
    int size = 0,max_len=0,i=0;
    scanf("%d", &size);
    char str[100];
    // printf("%s", str);
    for (int i = 0; i < size; i++)
    {
        scanf("%s", &str);
        while (str[max_len] != '\0'){
            ++max_len;
        }
        
    }
    printf("%d", max_len);
    
   return 0;
}