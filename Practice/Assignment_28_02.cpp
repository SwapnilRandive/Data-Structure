// Write a program which accept one number and position from user and off that bit.
// Return modified number.
// Input : 10       2
// Output : 8

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0XFFFFFFE;
    UINT iResult = 0;

    iMask = iMask <<(iPos - 1);

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iPosition = 0;
    UINT iRet = 0;

    cout<<"Enter number :-"<<"\n";
    cin>>iValue;

    cout<<"Enter the position :-"<<"\n";
    cin>>iPosition;

    iRet = OffBit(iValue, iPosition);

    cout<<"The modified number is :-"<<iRet<<"\n";

    return 0;
}