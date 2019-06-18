#include <stdio.h>


int main()
{
    int age, weightOfLuggage, price;

    //Input the age of the customer and weight
    scanf("%d%d",&age,&weightOfLuggage);

    if(age >= 60)
    {
        price = 0;
    }

    else if(age < 10)
    {
        price = 5;
    }

    else
    {
        if(weightOfLuggage  > 20)
        {
            price = 40;
        }
        else
        {
            price = 30;
        }
    }

    printf("%d",price);
    return 0;
}
