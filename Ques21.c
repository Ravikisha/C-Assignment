#include <stdio.h>
void main()
{
    char word[50],swap;
    int len = 0,repeats = 0,i, j;

    scanf("%s", &word);

    while (word[len]!='\0'){
        len++;
    } 
    for(j=0;j<len-1; j++) {
        for(i=0;i<len-1;i++) { 
            if (word[i] > word[i+1]) {
                swap = word[i];
                word[i]   = word[i+1];
                word[i+1] = swap;
            }
        }
    }

    i = 0;
    while (i<len-1) {
        if (word[i]==word[i+1]) {
            repeats++;
            j=i+2;
            while (j<len && word[i]==word[j]){
                j++;
            }
            i = j;
        } else {
            i++;
        }
    }

    printf("%d", repeats);
}