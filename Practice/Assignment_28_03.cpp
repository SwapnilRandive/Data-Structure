// Write a program which accept one number and position from user and ON that bit.
// Return modified numbrer.
// Input : 10   3
// Output : 14

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int OnBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask <<(iPos - 1);

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue =  0;
    UINT iPosition = 0;
    UINT iRet = 0;

    cout<<"Enter number :-"<<"\n";
    cin>>iValue;

    cout<<"Enter the position :-"<<"\n";
    cin>>iPosition;

    iRet = OnBit(iValue, iPosition);

    cout<<"The modified number is :-"<<iRet<<"\n";

    return 0;
}