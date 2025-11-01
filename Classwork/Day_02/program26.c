#include <stdio.h>

// Dynamic Function

void Display(int iFrequence)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iFrequence; iCnt++)
    {
        printf("Gay Ganesh...\n");
    }
}

int main()
{
    int iCount = 0;

    printf("Enter the frequency : \n");
    scanf("%d", &iCount);

    Display(iCount);

    return 0;
}
