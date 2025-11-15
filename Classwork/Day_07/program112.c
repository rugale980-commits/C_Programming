///////////////////////////////////////////////////////////
//
//    Required Header files
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int *ptr)  // Issue only print 4 time 100
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n", *ptr);
    }
}

int main()
{
    int Arr[] = {10, 20, 30, 40};

    Display(Arr); // Display(100);

    return 0;
}