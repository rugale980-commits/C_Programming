#include <stdio.h>
#include <stdlib.h>

typedef int *IPTR;

int Minimum(int Arr[], int iSize)
{
    int iMin = 0;
    int iCnt = 0;

    for (iMin = Arr[iCnt], iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
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
    iRet = Minimum(iptr, iLength);
    printf("Minimum number is : %d\n", iRet);

    // Step 3 : free the memory
    free(iptr);

    return 0;
}