#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int *IPTR;

// o(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            break;
        }
    }
    return (iCnt == iSize); // Its wrong
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int iValue = 0;
    bool bRet = false;
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

    printf("Enter the number to search :\n");
    scanf("%d", &iValue);

    // Step 2 : use the memory
    bRet = LinearSearch(iptr, iLength, iValue);

    if (bRet == true)
    {
        printf("%d is present in the data :\n", iValue);
    }
    else
    {
        printf("%d is not present in the data.", iValue);
    }
    // Step 3 : free the memory
    free(iptr);

    return 0;
}