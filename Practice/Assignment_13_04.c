/*We have to design application for tourist company.
  Tourist company provides cars on rent.
  Depends on the running of car they apply rent.
  If running is less than 100 kilometers then tehy charge 25 rupees per kilometre.
  And if running is more than 100 kilometers then they apply 15 rupees per kilometer after 100 kilometers.
  We have to accept number of kilometers from user and return the estimated rent.
  
  Input : 73                Output : 1825
  Input : 132               Output : 2980
  Input : 189               Output : 3835
  
  */

  #include<stdio.h>

  int TouristBill(int iKilometer)
  {
    int iNo = 0;
    int iNo1 = 0;

    if(iKilometer < 100)
    {
        iNo = 25 * iKilometer;
    }
    else
    {
        iNo = iKilometer - 100;
        iNo = iNo * 15;
        iNo1 = 100 * 25;
        iNo = iNo + iNo1;
    }
    return iNo;
  }

  int main()
  {
    int iValue = 0;
    int iRet = 0;

    printf("Etner the kilomenters \n");
    scanf("%d",&iValue);

    iRet = TouristBill(iValue);

    printf("The bill is %d",iRet);

    return 0;
  }