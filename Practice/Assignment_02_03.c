// Accept on number from user if number is less is less than 10 then print "Hello" otherwise print "Demo"

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 10;
    if(iNo < iCnt)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}