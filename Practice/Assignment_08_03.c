// Write a program which accept number from user and return the count of digits in between 3 and 7.

#include<stdio.h>

int CountRange(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit == 4) || (iDigit == 5) || (iDigit == 6))
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("The count of digits in between 3 to 7 in the given number is %d",iRet);

    return 0;
}