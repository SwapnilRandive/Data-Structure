// Write a program which checks whether 7th, 15th, 21st and 28th bit is ON or OFF

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X08104040;
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
        cout<<"The 7th, 15th, 21st and 28th bit is ON"<<"\n";
    }
    else
    {
        cout<<"The 7th, 15th, 21st and 28th bit is OFF"<<"\n";
    }

    return 0;
}