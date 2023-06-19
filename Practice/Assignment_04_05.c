// Write a program which accept total marks and obtained marks from user and calculate percentage

#include<stdio.h>

float Percentage(float iNo1, float iNo2)
{
 //   float fRet = 0.0f;

 //   fRet = ((iNo2 /iNo1));
    
    return ((iNo2 * 100)/ iNo1); 
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks :\n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks :\n");
    scanf("%d",&iValue2);

    fRet =Percentage(iValue1, iValue2);

    printf("Percentage is %f",fRet);

    return 0;
}

// Handle the condition if number is 0