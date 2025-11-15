//////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : Accept N number from user & Check number contains 11 in it or not.
//  Input         : Integer
//  Output        : Integer
//  Author        : Rahul Balasaheb Ugale
//  Date          : 14/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            return true;
        }
        return false;
    }
} // End of CountEven Function

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    bool bRet = false;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of element :\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (NULL == p)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the values :\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize);

    if (bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is Absent");
    }

    free(p);

    return 0;
} // End of main function

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input :
//      Enter number of element :
//      2
//      Enter the values :
//      22
//      33
//  Output :
//      11 is Absent
//
//  Input :
//      Enter number of element :
//      2
//      Enter the values :
//      11
//      34
//  Output :
//      11 is present
//
///////////////////////////////////////////////////////////////////////////////////////