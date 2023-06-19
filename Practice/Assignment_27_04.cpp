// Write a program which accept one number from user and toggle 7th and 10th bit of that number.
// Return modified number.
// Input : 137
// OUtput : 713

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int ToggleBit(UINT iNo)
{
    UINT iMask = 0X00000240;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter number :-"<<"\n";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"The modified number is :-"<<iRet<<"\n";

    return 0;
}