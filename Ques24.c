#include<stdio.h>
void convertIntoFeet(float);
void convertIntoPound(float);
void convertIntoFahrenheit(float);

void main(){
    int times;
    float quantity;
    char unit;
    scanf("%d",&times);
    for (int i = 0; i < times; i++)
    {
        scanf("%f %c",&quantity,&unit);
        if(unit == 'm'){
            convertIntoFeet(quantity);
        }else if(unit == 'g'){
            convertIntoPound(quantity);
        }else if(unit == 'c'){
            convertIntoFahrenheit(quantity);
        }
    }
    
}

void convertIntoFeet(float a){
    float mesure = (a*3.2808);
    printf("%.6f ft\n", mesure);
}

void convertIntoPound(float a){
    float mesure = (a*0.002205);
    printf("%.6f lbs\n", mesure);
}

void convertIntoFahrenheit(float a){
    float mesure = (32+(1.8*a));
    printf("%.6f f\n", mesure);
}