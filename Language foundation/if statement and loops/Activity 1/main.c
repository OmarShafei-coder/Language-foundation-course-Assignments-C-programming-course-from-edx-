#include <stdio.h>

int main()
{
    //Declaring variables :
    int numberOfPassengers;
    float costOfGas;
    float costOfTrip;

    printf("Please enter number of passengers :\t");
    scanf("%d",&numberOfPassengers);

    printf("Please enter the cost of the gas :\t");
    scanf("%f",&costOfGas);

    //If no passengers :
    if(!numberOfPassengers)
    {
        costOfTrip = costOfGas;
    }

    //if there are passengers
    else
    {
        costOfTrip = (1+costOfGas) / (++numberOfPassengers) ;  //increment is me
    }

    printf("Cost of the trip is %0.2f\n",costOfTrip);

    return 0;
}
