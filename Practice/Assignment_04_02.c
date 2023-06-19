// Write a program which accept one number from user and check whether that number is greatr than 100 or not

#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

bool ChkGreater(int iNo)
{
    if(iNo >= 100)
    {
        return TRUE;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("%d is greater than 100 \n",iValue);
    }
    else
    {
        printf("%d is smaller than 100 \n",iValue);
    }

    return 0;
}