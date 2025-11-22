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

    if (iRow != iCol)
    {
        printf("Invalid Input");
        printf("Row number and column number should be same");
        return;
    }

    for (iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for (jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if (jCnt < iCnt)
            {
                printf("\t");
            }
            else
            {
                printf("%d\t", jCnt);
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
//  Input  : iRow = 4 , iCol = 4 :
//
//  Output : 1  2   3   4
//              2   3   4
//                  3   4
//                      4
//
////////////////////////////////////////////////////////////////////////////////