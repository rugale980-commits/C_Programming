///////////////////////////////////////////////////////////
//
//    Required Header files
//
///////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to perfrom Display Frequence
//  Input :         Integer
//  Output :        Integer
//  Author :        Rahul Balasaheb Ugale
//  Date :          10/10/2025
//
///////////////////////////////////////////////////////////

void Display(int iFrequence)
{
    int iCnt = 0;

    // Filter
    if (iFrequence < 0)
    {
        printf("Invalid Input\n");
        return;
    }

    for (iCnt = 1; iCnt <= iFrequence; iCnt++)
    {
        printf("Gay Ganesh...\n");
    }
} // End of the Display

///////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////

int main()
{
    int iCount = 0;

    printf("Enter the frequency : \n");
    scanf("%d", &iCount);

    Display(iCount);

    return 0;
} // End of main function

///////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : Enter the frequency : 4
//  Output : Gay Ganesh...
//           Gay Ganesh...
//           Gay Ganesh...
//           Gay Ganesh...
//  Input  : Enter the frequency : 1
//  Output : Gay Ganesh...
//
//  Input  : Enter the frequency : -4
//  Output : Invalid Input
//
///////////////////////////////////////////////////////////
