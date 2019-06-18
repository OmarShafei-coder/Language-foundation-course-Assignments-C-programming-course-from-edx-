/*
You plan to make a delicious meal and want to take the money you need to buy the ingredients.
Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need.
The program should read in the number of ingredients (up to a maximum of 10 integers),
then for each ingredient the price per pound.
Finally your program should read the weight necessary for the recipe (for each ingredient in the same order).
Your program should calculate the total cost of these purchases,then display it with 6 decimal places.
*/

#include <stdio.h>

int main()
{
    double price[10];
    double weight[10];
    int numOfIngredients;
    int counter;
    double cost = 0;

    //Input the number of ingredients
    scanf("%d",&numOfIngredients);

    //the price per pound
    for(counter = 0; counter < numOfIngredients; counter++)
    {
        scanf("%lf",&price[counter]);
    }

    for(counter = 0; counter < numOfIngredients; counter++)
    {
        scanf("%lf",&weight[counter]);
    }

     for(counter = 0; counter < numOfIngredients; counter++)
    {
        cost += price[counter] * weight[counter];
    }

    printf("%0.6lf\n",cost);
    return 0;
}
