#include <stdio.h>
#include <stdlib.h>

typedef int *IPTR;

int FrequenceCalculate(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if (Arr[iCnt] == 11)
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

    // Step 2 : use the memory

    iRet = FrequenceCalculate(iptr, iLength);
    printf("Frequence of 11 is : %d\n", iRet);

    // Step 3 : free the memory
    free(iptr);

    return 0;
}