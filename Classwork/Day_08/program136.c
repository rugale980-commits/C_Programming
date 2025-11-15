#include <stdio.h>
#include <stdlib.h>

typedef int *IPTR;

int FrequenceCalculate(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;
    int iValue = 0;
    IPTR iptr = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d", &iLength);

    // Step 1 : Allocate memory
    iptr = (IPTR)malloc(iLength * sizeof(int));

    if (NULL == iptr)
    {
        printf("Unable to aalocate the memory\n");
        return -1;
    }

    printf("Enter the values :\n");

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iptr[iCnt]);
    }

    printf("Enter the number to calculate Frequence :\n");
    scanf("%d", &iValue);

    // Step 2 : use the memory

    iRet = FrequenceCalculate(iptr, iLength, iValue);
    printf("Frequence of %d is : %d\n", iValue, iRet);

    // Step 3 : free the memory
    free(iptr);

    return 0;
}