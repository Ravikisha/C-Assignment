#include<stdio.h>

void main(){
    int ingredient[10],ingredient_id;
    for(int i=0; i<10; i++){
        scanf("%d",&ingredient[i]);
    }
    scanf("%d",&ingredient_id);
    printf("%d",ingredient[ingredient_id]);
}