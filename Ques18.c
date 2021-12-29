#include<stdio.h>

void main(){
    char student_name[50];
    int charcount =0;
    scanf("%s",&student_name);
    for (int i = 0; i < 50; i++)
    {
        if(student_name[i] != ' '){
            charcount++;
        }
    }
    if(charcount % 2 == 0){
        printf("1");
    }else{
        printf("2");
    }
}