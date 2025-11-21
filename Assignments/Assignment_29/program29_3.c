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
//  Date          : 20/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int jCnt = 0;
    int iNo = 0;
    char ch = 'a';

    for (iCnt = 1; iCnt <= iRow; iCnt++)
    {
        if (iCnt % 2 == 1)
        {
            ch = 'a';
        }
        else
        {
            iNo = 1;
        }

        for (jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if (iCnt % 2 == 1)
            {
                printf("%c\t", ch);
                ch++;
            }
            else
            {
                printf("%d\t", iNo);
                iNo++;
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
//  Output :a       b       c       d       e
//          1       2       3       4       5
//          a       b       c       d       e
//          1       2       3       4       5
//          a       b       c       d       e
//
////////////////////////////////////////////////////////////////////////////////