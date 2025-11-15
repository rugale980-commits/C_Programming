//////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Frequence
//  Description   : Accept N number from user & accept one another number as NO return frequence of NO.
//  Input         : Integer
//  Output        : Integer
//  Author        : Rahul Balasaheb Ugale
//  Date          : 14/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

int Frequence(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
} // End of CountEven Function

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0, iValue = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of element :\n");
    scanf("%d", &iSize);

    printf("Enter number check Frequence :\n");
    scanf("%d", &iValue);

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

    iRet = Frequence(p, iSize, iValue);

    printf("%d frequence is %d", iValue, iRet);

    free(p);

    return 0;
} // End of main function

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  :
//      Enter number of element :
//      6
//      Enter number check Frequence :
//      66
//      Enter the values :
//      85
//      66
//      3
//      66
//      93
//      88
//  Output :
//     66 frequence is 2
//
//
///////////////////////////////////////////////////////////////////////////////////////