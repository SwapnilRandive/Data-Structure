// Accept number from user and check whether number is even or odd

#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

bool CheckEvenOdd(int iNo)
{
    bool bReturn = FALSE;

    if((iNo % 2) == 0)
    {
        bReturn = TRUE;
    }
    else
    {
        bReturn = FALSE;
    }
    
    return bReturn;
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter number \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == TRUE)
    {
        printf("%d is even number",iValue);
    }
    else
    {
        printf("%d is odd number",iValue);
    }

    return 0;
}