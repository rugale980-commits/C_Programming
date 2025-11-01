#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    // Input : 6    iCnt = 2
    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            break; // Optimization
        }

        if (iCnt > (iNo / 2)) // No factor
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

/*
    Time compelxity : For prime - N/2
    Time complexity : For Non-prime - either 1 or 2
*/