////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accept number of row and  number of column from user and
//                  display below pattern.
//  Input         : Interger
//  Output        : Integer
//  Author        : Rahul Balasaheb Ugale
//  Date          : 22/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int jCnt = 0;

    for (iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for (jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if ((iCnt == jCnt) || (iCnt == 1) || (iCnt == iRow) || (jCnt == 1) || (jCnt == iCol))
            {
                printf("%d\t", jCnt);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }

} // End of function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d", &iValue1);

    printf("Enter number of Columns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : iRow = 4 , iCol = 5 :
//
//  Output : 1       2       3       4       5
//           1       2                       5
//           1               3               5
//           1                       4       5
//           1       2       3       4       5
//
////////////////////////////////////////////////////////////////////////////////