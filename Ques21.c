#include <stdio.h>
int main(void)
{
    char word[51],swap;
    int length = 0,repeats = 0,i, j;

    scanf("%s", &word);

    while (word[length]!='\0'){
        length++;
    } 
    for(j=0;j<length-1; j++) {
        for(i=0;i<length-1;i++) { 
            if (word[i] > word[i+1]) {
                swap = word[i];
                word[i]   = word[i+1];
                word[i+1] = swap;
            }
        }
    }

    i = 0;
    while (i<length-1) {
        if (word[i]==word[i+1]) {
            repeats++;
            j=i+2;
            while (j<length && word[i]==word[j]){
                j++;
            }
            i = j;
        } else {
            i++;
        }
    }

    printf("%d", repeats);

    return 0;
}