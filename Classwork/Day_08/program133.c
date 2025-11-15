#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *iptr = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d", &iLength);

    // Step 1 : Allocate memory
    iptr = (int *)malloc(iLength * sizeof(int));

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
    // Call to function which contains business logic
    // Fun(iptr,iLength);

    // Step 3 : free the memory
    free(iptr);

    return 0;
}