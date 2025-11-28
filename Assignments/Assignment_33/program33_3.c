////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkAlpha
//  Description   : Accept Character from user and check whether it is Digit or
//                   not (0 - 9)
//  Input         : Character
//  Output        : Character
//  Author        : Rahul Balasaheb Ugale
//  Date          : 28/11/2025
//
////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char str[])
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= '0') && (*str <= '9'))
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
        str++;
    }

} // End of function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue[] = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    bRet = ChkAlpha(cValue);

    if (bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 12
//  Output : It is Digit
//
//  Input  : R
//  Output : It is not a Digit
//
////////////////////////////////////////////////////////////////////////////////