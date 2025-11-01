#include <stdio.h>
#include <stdbool.h>

bool checkEvenOdd(int iNo)
{
    return ((iNo % 2) == 0);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = checkEvenOdd(iValue);

    if (bRet == true)
    {
        printf("%d is Even Number \n", iValue);
    }
    else
    {
        printf("%d is Odd Number \n", iValue);
    }
    return 0;
}