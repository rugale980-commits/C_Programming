///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include <stdio.h>   // For input output
#include <stdbool.h> // For bool datatype

///////////////////////////////////////////////////////////////
//
//  Function Name :  checkedevenOdd
//  Description :    It is used to check even or odd
//  Input :          Integer
//  Output :         Boolean
//  Author :         Rahul Balasaheb Ugale
//  Date :           10/10/2025
//
///////////////////////////////////////////////////////////////

bool checkEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if (iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
} // End of the CheckEvenOdd

///////////////////////////////////////////////////////////////
//
//  Entery point function for the application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = checkEvenOdd(iValue);

    if (bRet == true)
    {
        printf("%d is Even Number \n", iValue);
    }
    else
    {
        printf("%d is Odd Number \n", iValue);
    }
    return 0;
} // End of the main function

///////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input1 : Enter number : 11
//  Output : 11 is odd number
//
//  Input  : Enter number : 10
//  Output : 10 is even number
//
//  Input1 : Enter number : -11
//  Output : -11 is odd number
//
//  Input  : Enter number : -10
//  Output : -10 is even number
//
///////////////////////////////////////////////////////////////