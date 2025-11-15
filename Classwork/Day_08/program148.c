#include <stdio.h>
#include <stdlib.h>

typedef int *IPTR;

void Update(int Arr[], int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        Arr[iCnt]++;
    }
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
    Update(iptr, iLength);

    printf("Updated data from array is :");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n", iptr[iCnt]);
    }

    // Step 3 : free the memory
    free(iptr);

    return 0;
}