// Write a program which checks whether 5th and 18th bit is ON or OFF

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X00020010;
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
    bool bRet = 0;

    cout<<"Enter number"<<"\n";
    cin>>iValue;

    bRet = ChkBit(iValue);
    if(bRet == true)
    {
        cout<<"The 5th and 18th bit is ON"<<"\n";
    }
    else
    {
        cout<<"The 5th and 18th bit is OFF"<<"\n";
    }

    return 0;
}