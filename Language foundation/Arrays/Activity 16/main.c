/*
Write a C-program that prints out a word as many times as specified.
The number of repetitions and the word should be given as input to the program.
You may assume that the word has no more than 100 characters (be sure to also reserve space for the null terminator,\0, though!).
*/
#include <stdio.h>

int main()
{
    char string[101];
    char repetetions;

    scanf("%d%s",&repetetions,string);
    printf("\n");
    for(int i = 0; i < repetetions; i++)
    {
        printf("%s\n",string);
    }

    return 0;
}