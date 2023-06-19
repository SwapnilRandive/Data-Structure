// Write a program which accept one number from user and range of positions from user. 
// Toggle all bits from that range.
// Input :- 897      9    13
// Output :- Toggle all bits from position 9 to 13 of input number ie 897.

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int ToggleBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iMask = 0X00000001;

    iMask1 = iMask1 <<(iPos1 -1);
    iMask2 = iMask2 <<(iPos2 -1);
    while(iMask)
}

int main()
{
    UINT iValue = 0;
    UINT iPosition1 = 0, iPosition2 = 0;
    UINT iRet = 0;

    cout<<"Enter number :-"<<"\n";
    cin>>iValue;

    cout<<"Enter first position :-"<<"\n";
    cin>>iPosition1;

    cout<<"Enter second position :-"<<"\n";
    cin>>iPosition2;

    iRet = ToggleBit(iValue, iPosition1, iPosition2);

    cout<<"The modified number is :-"<<iRet<<"\n";

    return 0;
}