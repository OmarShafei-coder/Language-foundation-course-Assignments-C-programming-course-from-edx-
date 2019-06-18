#include <stdio.h>
#include "TYPES.h"

int main()
{
    u8 timeOfArrival;
    u8 price;

    printf("Please enter the arrival time :\t");
    scanf("%d",&timeOfArrival);

    if(!timeOfArrival)
    {
        price = 10;
    }

    else if(timeOfArrival > 0 && timeOfArrival < 9)
    {
        price = 10 + (5 * timeOfArrival);
    }

    else
    {
        price = 53;
    }

    printf("%d",price);

    return 0;
}
