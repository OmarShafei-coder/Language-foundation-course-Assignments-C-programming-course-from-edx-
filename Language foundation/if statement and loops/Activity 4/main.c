#include <stdio.h>
#define NUM_OF_PLAYERS 3

int main()
{
    //Declaring variables
    int counter, team1_weight = 0, team2_weight = 0;
    int team1[NUM_OF_PLAYERS], team2[NUM_OF_PLAYERS];


    //input the weight for team1 & calculating the weight
    for(counter = 0; counter < NUM_OF_PLAYERS; counter++)
    {
        scanf("%d",&team1[counter]);
        team1_weight += team1[counter];
    }

    //Input the weight for team2 & calculating the weight
    for(counter = 0; counter < NUM_OF_PLAYERS; counter++)
    {
        scanf("%d",&team2[counter]);
        team2_weight += team2[counter];
    }

    if(team1_weight > team2_weight)
    {
        printf("Team 1 has an advantage\n");

    }

    else
    {
         printf("Team 2 has an advantage\n");
    }

    printf("Total weight for team 1: %d\n",team1_weight);
    printf("Total weight for team 2: %d\n",team2_weight);

    return 0;
}
