#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0, iFrequence = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iFrequence++;
        }

        if (iFrequence == 0) // No factor
        {
            return true;
        }
        else // Atlest One factor
        {
            return false;
        }
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        printf("%d is prime number\n", iValue);
    }
    else
    {
        printf("%d is not prime number\n", iValue);
    }

    return 0;
}