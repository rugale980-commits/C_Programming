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
//  Description   : Accept N number from user & return diff Frequence of Even & Odd num.
//  Input         : Integer
//  Output        : Integer
//  Author        : Rahul Balasaheb Ugale
//  Date          : 14/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

int Frequence(int Arr[], int iLength)
{
    int iCnt = 0;
    int EvenCount = 0;
    int OddCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            EvenCount++;
        }
        else
        {
            OddCount++;
        }
    }
    return EvenCount - OddCount;
} // End of CountEven Function

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0;
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

    iRet = Frequence(p, iSize);

    printf("Even And Odd Diffrence is %d", iRet);

    free(p);

    return 0;
} // End of main function

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  :
//      Enter number of element :
//      7
//      Enter the values :
//      85
//      66
//      3
//      80
//      93
//      88
//      90
//  Output :
//     Even And Odd Diffrence is 1
//
///////////////////////////////////////////////////////////////////////////////////////