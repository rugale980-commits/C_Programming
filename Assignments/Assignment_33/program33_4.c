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
//  Description   : Accept Character from user and check whether it is Small case
//                  or not (a - z)
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
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
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
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case character");
    }

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : R
//  Output : It is Small case character
//
//  Input  : r
//  Output : It is not a Small case character
//
////////////////////////////////////////////////////////////////////////////////
