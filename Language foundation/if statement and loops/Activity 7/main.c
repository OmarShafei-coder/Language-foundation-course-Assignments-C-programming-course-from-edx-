/*
Your grandparents gave you a fantastic cooking recipe but you can never remember how much of each ingredient you have to use!
There are 10 ingredients in the recipe and the quantities needed for each of them are given as input (in grams).
Your program must read 10 integers (the quantities needed for each of the ingredients, in order) and store them in an array.
It should then read an integer which represents an ingredient's ID number (between 0 and 9),
and output the corresponding quantity.
*/

#include <stdio.h>

int main()
{
    int ingredients[10];
    int counter, ingredientID;

    //Input the array elements
    for(counter = 0; counter < 10; counter++)
    {
        scanf("%d",&ingredients[counter]);
    }

    //Input ingredient ID
    scanf("%d",&ingredientID);

    printf("%d",ingredients[ingredientID]);
    return 0;
}
