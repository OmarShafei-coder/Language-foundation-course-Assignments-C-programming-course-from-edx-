/*
You want to determine the number of cities in a given region that have a population strictly greater than 10,000.
To do this, you write a program that first reads the number of cities in a region as an integer,
and then the populations for each city one by one (also integers).
*/

#include <stdio.h>

int main()
{
    int numOfCities, population[10];
    int counter = 0, i;

    //number of cities
    scanf("%d",&numOfCities);

    for(i = 0; i < numOfCities; i++)
    {
       scanf("%d",&population[i]);

       if(population[i] > 10000)
       {
           counter++;
       }
    }

    printf("%d\n",counter);
    return 0;
}
