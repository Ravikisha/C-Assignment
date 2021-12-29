#include <stdio.h>

void main()
{
    int firstDice, secondDice,payValue;
    scanf("%d%d", &firstDice, &secondDice);
    if (firstDice >= 1 && firstDice <= 6 && secondDice >= 1 && secondDice <= 6)
    {
        if ((firstDice + secondDice) >= 10)
        {
            payValue = 36;
            printf("Special tax\n");
            printf("%d",payValue);
        }
        else
        {
            payValue = (firstDice + secondDice) * 2;
            printf("Regular tax\n");
            printf("%d", payValue);
        }
    }
    else
    {
        printf("Invalid Dice Values.");
    }
}