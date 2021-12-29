#include<stdio.h>

void main(){
    int min_range,max_range,temp;
    scanf("%d%d",&min_range,&max_range);
    while(1){
        scanf("%d",&temp);
        if(temp == -999){
            printf("Alert!");
            break;
        }else if(temp>=min_range&&temp<=max_range){
            printf("Nothing to report\n");
        }
    }
}