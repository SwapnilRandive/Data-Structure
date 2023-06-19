// Write a program which accept number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int ifSum = 0;
    int infSum = 0;
    int iAns = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            ifSum = ifSum + iCnt;
        }
        else
        {
            infSum = infSum + iCnt;
        }
    }
    iAns = ifSum - infSum;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference is :%d",iRet);

    return 0;
}