/*
You are responsible for a rail convoy of goods consisting of several boxcars.
You start the train and after a few minutes you realize that some boxcars are overloaded and weigh too heavily on the rails
while others are dangerously light. So you decide to stop the train and spread the weight more evenly
so that all the boxcars have exactly the same weight (without changing the total weight).
For that you write a program which helps you in the distribution of the weight.

Your program should first read the number of cars to be weighed (integer) followed by the weights of the cars (doubles).
Then your program should calculate and display how much weight to add or subtract from each car
such that every car has the same weight. The total weight of all of the cars should not change.
These additions and subtractions of weights should be displayed with one decimal place.

You may assume that there are no more than 50 boxcars.
*/
#include <stdio.h>

int main()
{
    double weight[50];
    int numOfCars, counter;
    double totalWeight = 0;
    //Number of cars
    scanf("%d",&numOfCars);

    //Weight of each car
    for(counter = 0; counter < numOfCars; counter++)
    {
        scanf("%lf",&weight[counter]);
        totalWeight += weight[counter];
    }

    //(totalWeight / numOfCars) - weight[counter]
    //calculate the average weight and add or subtract weight form the cars
    for(counter = 0; counter < numOfCars; counter++)
    {
        printf("%0.1lf\n",(totalWeight / numOfCars) - weight[counter]);
    }
    return 0;
}
