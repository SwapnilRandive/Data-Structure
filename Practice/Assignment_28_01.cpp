// Write a program which accept one number and position from user and check whether bit at that position is ON or OFF.
// If bit is ON return TRUE otherwise return FALSE.
// Input : 10   2
// Output : TRUE

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask <<(iPos - 1);

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
    UINT iPosition = 0;
    bool bRet = false;

    cout<<"Enter number :-"<<"\n";
    cin>>iValue;

    cout<<"Enter  the position :-"<<"\n";
    cin>>iPosition;

    bRet = ChkBit(iValue, iPosition);
    if(bRet == true)
    {
        cout<<"The bit is ON(TRUE)"<<"\n";
    }
    else
    {
        cout<<"The bit is OFF(FALSE)"<<"\n";
    }

    return 0;
}