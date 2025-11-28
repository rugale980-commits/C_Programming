////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkAlpha
//  Description   : Accept division of student from user & depends on the division
//                  display Exam timing
//  Input         : Character
//  Output        : Character
//  Author        : Rahul Balasaheb Ugale
//  Date          : 28/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv[])
{
    int iCnt = 0;

    while (*chDiv != '\0')
    {
        switch (*chDiv)
        {
        case 'A':
        case 'a':
            printf("Your exam at 9.20 AM");
            break;

        case 'B':
        case 'b':
            printf("Your exam at 8.30 AM");
            break;

        case 'C':
        case 'c':
            printf("Your exam at 9.20 AM");
            break;

        case 'D':
        case 'd':
            printf("Your exam at 10.30 AM");
            break;

        default:
            printf("Invalid division");
            break;
        }
        chDiv++;
        break;
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

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : C
//  Output : Your exam at 9.20 Am
//
//  Input  : d
//  Output : Your exam at 10.30 AM
//
////////////////////////////////////////////////////////////////////////////////