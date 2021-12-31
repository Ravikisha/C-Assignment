#include<stdio.h>

void main(){
    char student_name[50];
    int charcount =0,sizeOfName=0;
    scanf("%s",&student_name);
    while(student_name[0] != '\0'){
        sizeOfName++;
    }
    for (int i = 0; i < sizeOfName; i++)
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