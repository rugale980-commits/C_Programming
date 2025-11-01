#include <stdio.h>

void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0, iFrequence1 = 0, iFrequence2 = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iFrequence1++;
        }
        else
        {
            iFrequence2++;
        }
    }

    printf("Number of factors are : %d\n", iFrequence1);
    printf("Number of factors are : %d\n", iFrequence2);
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    CountFactorsNonFactors(iValue);

    return 0;
}