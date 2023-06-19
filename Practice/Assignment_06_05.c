// Write a program which accept number from user and display its table in reverse order

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

  /* iAns = iNo * 10;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iAns);
        iAns = iAns - iNo;
    }

    */

    for(iCnt = 10 ; iCnt >= 1 ; iCnt--)
    {
        iAns = iNo * iCnt;
        printf("%d\t",iAns);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}