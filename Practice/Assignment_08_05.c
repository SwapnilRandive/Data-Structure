// Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int ioCount = 0;
    int isCount = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            isCount = isCount + iDigit;
        }
        if((iDigit % 2) != 0)
        {
            ioCount = ioCount + iDigit;
        }

        iNo = iNo / 10;
    }

    return isCount - ioCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("The difference is %d",iRet);

    return 0;
}