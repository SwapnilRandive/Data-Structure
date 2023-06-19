// Write a program which accept one number from user and toggle contents of first and last nibble of the number.
// Return modified number (Nibble is a group of four bits)

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int ToggleBit(UINT iNo)
{
    UINT iMask = 0X99999999;
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

    cout<<"The modified numbrer is :-"<<iRet<<"\n";

    return 0;
}