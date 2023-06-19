// Write a program which accept one number from user and check whether 9th or 12th bit is ON or OFF.
// Input : 257
// Output : TRUE

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask1 = 0X00000100;
    UINT iMask2 = 0X00000800;
    UINT iMask = 0X00000900;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if((iResult == iMask) || (iResult == iMask1) || (iResult == iMask2))
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

    cout<<"Enter the number :-"<<"\n";
    cin>>iValue;

    bRet = ChkBit(iValue);
    if(bRet == true)
    {
        cout<<"The 9th or 12th bit is ON"<<"\n";
    }
    else
    {
        cout<<"The 9th and 12th bit is OFF"<<"\n";
    }

    return 0;
}