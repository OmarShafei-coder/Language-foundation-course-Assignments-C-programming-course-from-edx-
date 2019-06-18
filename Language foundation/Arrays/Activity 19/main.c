/*
Your job is to find the length of the longest word in a text with no punctuation or special characters of any kind
only contains words. To do so, please write a C-program that takes as a input first the number of words in a text,
followed by all of the words in the text. The output of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.
*/

#include <stdio.h>

int main()
{
    char phrase[101];
    int numOfWords;
    int i;
    int counter = 0;
    int numOfchars[100] = {0};
    int max = 0;

    scanf("%d",&numOfWords);

    for(i = 0; i < numOfWords; i++)
    {
        scanf("%s",phrase);

        while(phrase[counter] != '\0')
        {
            counter++;
        }
        numOfchars[i] = counter;
    }

    for(i = 0; i < numOfWords; i++)
    {
        if(max < numOfchars[i]) max = numOfchars[i];
    }

    printf("%d",max);
    return 0;
}
