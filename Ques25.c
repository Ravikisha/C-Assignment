#include<stdio.h>
int min(int,int);
void main(){
    int t;
    scanf("%d",&t);
    int nums[t];
    for (int i = 0; i < t; i++)
    {
        int num;
        scanf("%d",&num);
        nums[i] = num;
    }
    for (int i = 0; i < t; i++)
    {
        nums[0] = min(nums[0],nums[i]);
    }
    printf("%d\n",nums[0]);    
}
int min(int a,int b){
    if (a<b)
    {
        return a;
    }else{
        return b;
    }
        
}