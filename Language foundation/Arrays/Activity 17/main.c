/*
Your local public library keeps a record of all of its patrons, consisting of index cards that hold a person's last name
followed by their first name (so that the cards can easily be sorted alphabetically by last name).
Unfortunately a computer error led to incorrectly printed forms last month,
resulting in a number of cards that list the patron's first name followed by their last name rather than the other way around.
Your job is to read these pairs of first and last names and display them in the correct order (last name followed by first name).
 You may assume that each first and last name has at most 100 characters and does not contain any spaces.

Your program should first accept the total number of names (an integer), and each following line will contain one of the names.
For each person, you must display on one line their last name followed by their first name (separated by one space).
*/

#include <stdio.h>

int main()
{
    char i;
    char firstName[101],lastName[101],numOfNames;

    scanf("%d",&numOfNames);

    for(i = 0; i < numOfNames; i++)
    {
        scanf("%s%s",firstName,lastName);
        printf("%s %s\n",lastName,firstName);
    }
    return 0;
}
