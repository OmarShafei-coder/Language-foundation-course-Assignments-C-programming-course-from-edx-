#include <stdio.h>

int main()
{
    int firstDie, secondDie, result;

    scanf("%d%d",&firstDie,&secondDie);
    result = firstDie + secondDie;

    if(result < 10)
    {
        printf("Regular tax\n");
        printf("%d\n",result * 2);
    }

    else
    {
        printf("Special tax\n");
        printf("%d",36);
    }

    return 0;
}
