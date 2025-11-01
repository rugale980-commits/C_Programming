/*
Write the program first the understand the five steps :
Step 1 : Undesrstand the problem step
Step 2 : Write the algorithem
Step 3 : Deciside the programming language
Step 4 : write the program
Step 5 : Test the program
*/
/*
Algorithm :
START
    Accept first number of no1
    Accept first number of no2
    If the input is negative then convert it into positive
    Perfrom Addition of no1 & no2
    Display the Addition on screen
STOP
*/
#include <stdio.h>
float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0;

    // Updator
    if (fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if (fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }
    fSum = fNo1 + fNo2; // Business Logic
    return fSum;
}
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter the first Number : \n");
    scanf("%f", &fValue1);

    printf("Enter the second Number : \n");
    scanf("%f", &fValue2);

    fRet = AdditionTwoNumbers(fValue1, fValue2);

    printf("Addition is %f\n", fRet);

    return 0;
}