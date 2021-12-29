#include<stdio.h>

void main(){
    int n,team1Weight=0,team2Weight=0;
    scanf("%d",&n);
    for(int i=0;i<(n*2);i=i+1){
        int inputWeight;
        scanf("%d",&inputWeight);
        if(i%2==0){
            team1Weight=team1Weight+inputWeight;
        }
        else{
            team2Weight=team2Weight+inputWeight;
        }
    }
    if(team1Weight>team2Weight){
        printf("Team 1 has an advantage.\n");
    }
    else if(team1Weight<team2Weight){
        printf("Team 2 has an advantage.\n");
    }
    else{
        printf("Tie");
    }
    printf("Total weight for team 1: %d\n",team1Weight);
    printf("Total weight for team 2: %d\n",team2Weight);
}