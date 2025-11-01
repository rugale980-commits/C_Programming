// iteration
#include <stdio.h>

int main()
{
    int iNo = 0;
    int iDigit = 0;

    printf("Enter number : \n");
    scanf("%d", &iNo);

    printf("_____________________________________________\n");
    printf("Original value of iNo is : %d\n", iNo);

    while (iNo != 0)
    {
        printf("_____________________________________________\n");
        iDigit = iNo % 10;
        printf("iDigits is : %d\n", iDigit);
        iNo = iNo / 10;
        printf("iNo is : %d\n", iNo);
    }

    printf("_____________________________________________\n");

    return 0;
}