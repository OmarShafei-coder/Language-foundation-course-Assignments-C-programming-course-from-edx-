//Create a program that displays on the screen a square of n x n stars, with the integer n given as an input.

#include <stdio.h>

int main()
{
    int numberOfStars;
    int i,j;
    scanf("%d",&numberOfStars);
    for(i = 0; i < numberOfStars; i++)
    {
         for(j = 0; j < numberOfStars; j++)
         {
             printf("*");
         }
         printf("\n");
    }

    return 0;
}
