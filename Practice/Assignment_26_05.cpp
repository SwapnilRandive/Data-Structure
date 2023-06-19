// Write a program which checks whether first and last bit is ON or OFF.
// First bit means bit number 1 and last bit means bit number 32.

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X80000001;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter number :-"<<"\n";
    cin>>iValue;

    bRet = ChkBit(iValue);
    if(bRet == true)
    {
        cout<<"The First and Last bit is ON"<<"\n";
    }
    else
    {
        cout<<"The First and Last bit is OFF"<<"\n";
    }

    return 0;
}