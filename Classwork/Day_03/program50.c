// Time Complexity : O(N/2)
/////////////////////////////////////////////////////////////
//
//    Required Header files
//
/////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactors
//  Description :   it is used to perfrom Display Factor
//  Input :         void, integer
//  Output :        integer
//  Author :        Rahul Balasaheb Ugale
//  Date :          15/10/2025
//
/////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d\n", iCnt);
        }
    }
} // End of Function

/////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
} // End of the main

/////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//  Input :
//          Enter the number : 10
//  Output :
//           1
//           2
//           5
//
//  Innput :
//          Enter the number : -10
//  output :
//           1
//           2
//           5
/////////////////////////////////////////////////////////////