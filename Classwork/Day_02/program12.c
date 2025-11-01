/*
    START
        Accept number and store as no
        Divide no by 2
        If the remainber is 0
            then diplay as even
        otherwise
            display as odd

    STOP
*/

#include <stdio.h>

void checkEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if (iRem == 0)
    {
        printf("It is Even Number\n");
    }
    else
    {
        printf("It is odd Number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    checkEvenOdd(iValue);

    return 0;
}