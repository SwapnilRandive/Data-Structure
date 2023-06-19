// Write a program which accept one number, two positions from user and check whether bit at first or bit at second position is ON or OFF.
// Input :- 10    3        7
// Output :- TRUE

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iMask = 0X00000000;
    UINT iResult = 0;

    iMask1 = iMask1 <<(iPos1 - 1);
    iMask2 = iMask2 <<(iPos2 - 1);
    iMask = iMask1 | iMask2;

    iResult = iNo & iMask;
    if((iResult == iMask1) || (iResult == iMask2) || (iResult == iMask))
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
    UINT iPosition1 = 0;
    UINT iPosition2 = 0;
    bool bRet = false;

    cout<<"Enter number :-"<<"\n";
    cin>>iValue;

    cout<<"Enter first position :-"<<"\n";
    cin>>iPosition1;

    cout<<"Enter second position :-"<<"\n";
    cin>>iPosition2;

    bRet = ChkBit(iValue, iPosition1, iPosition2);
    if(bRet == true)
    {
        cout<<"The bit at first position or bit at second position are ON"<<"\n";
    }
    else
    {
        cout<<"The bit at first position and bit at second position are OFF"<<"\n";
    }

    return 0;
}