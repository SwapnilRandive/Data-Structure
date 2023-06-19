// Write a program which accept number from user and return multiplication of all digits.

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iAns = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        /*if(iDigit == 0)
        {
            iDigit = 1;
        }
        iAns = iAns * iDigit;*/

        if(iDigit > 0)
        {
            iAns = iAns * iDigit;
        }
        iNo = iNo / 10;
    }

    return iAns;
}

int main()
{
    int iValue = 0; 
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("The multiplication of all digits in the number %d are %d",iValue,iRet);

    return 0;
}