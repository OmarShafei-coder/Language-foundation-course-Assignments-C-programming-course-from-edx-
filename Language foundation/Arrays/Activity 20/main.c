/*
You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T'
in the first half of the word (including the middle letter if there is one).
Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1.
If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2.
Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1.
You may assume that the word entered does not have more than 50 letters.
*/

#include <stdio.h>

int main()
{
    char word[50];
    int i;
    int counter = 0;
    int j = 0;   //for solving problem of the third case(if there's not 't' or 'T' in the word)
    scanf("%s",word);

    while(word[counter] != '\0')
    {
        counter++;
    }

    //if the letter in the first half of the word
    for(i = 0; i <= (counter / 2); i++)
    {
        if(word[i] == 'T' || word[i] == 't')
        {
            printf("%d",1);
            j = 1;
            break;
        }
    }

    //if the letter in the second half of the word
    for(i = counter; i > (counter / 2); i--)
    {
        if(word[i] == 'T' || word[i] == 't')
        {
            printf("%d",2);
            j = 1;
            break;
        }
    }

    if(j == 0)
    {
        printf("%d",-1);
    }
    return 0;
}
