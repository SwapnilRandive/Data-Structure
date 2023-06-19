// Write a program which accept number from user and check whether it contains 0 in it or not;

#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

bool ChkZero(int iNo)
{
    bool bAns = FALSE;
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bAns = TRUE;
            break;
        }
        iNo = iNo / 10;
    }

    return bAns;
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero.\n");
    }
    else
    {
        printf("There is no zero.\n");
    }

    return 0;
}