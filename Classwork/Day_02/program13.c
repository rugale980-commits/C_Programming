#include <stdio.h>
#include <stdbool.h>

bool checkEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if (iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number\n");
    scanf("%d", &iValue);

    bRet = checkEvenOdd(iValue);

    printf("Result is : %d\n", bRet);

    return 0;
}