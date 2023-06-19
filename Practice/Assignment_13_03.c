/*Design application for school management system.
  As school is primray there are 4 standards from 1 ot 4.
  School fees of each standard is differentl.
  For first standard fees are 8900, for second standard 12790, for third standard 21000 and for fourth standard fees are 23450.
  We have to accept standard from user and display the corresponding fees.
  
  Input : 2            Output : 12790
  Input : 4            Output : 23450
  Input : 6            Output : Wrong input
  
  */

#include<stdio.h>

int SchoolFees(int Standard)
{
    if(Standard == 1)
    {
        return 8900;
    }
    else if(Standard == 2)
    {
        return 12790;
    }
    else if(Standard == 3)
    {
        return 21000;
    }
    else if(Standard == 4)
    {
        return 23450;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the standard \n");
    scanf("%d",&iValue);

    iRet = SchoolFees(iValue);

    if(iRet == 0)
    {
        printf("Wrong input");
    }
    else
    {
        printf("The standard is %d and fees are %d",iValue,iRet);
    }

    return 0;
}