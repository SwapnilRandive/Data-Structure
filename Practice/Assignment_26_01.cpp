// Write a program which checks whether 15th bit is ON or OFF 

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{                               //                      (8421)
    UINT iMask = 0X00004000;    // (0000  0000 0000 0000 0100 0000 0000 0000 )
    UINT iResult = 0;           // (  0     0    0    0    4    0    0    0  )

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

    cout<<"Enter number"<<"\n";
    cin>>iValue;

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        cout<<"The 15th bit is ON"<<"\n";
    }
    else
    {
        cout<<"The 15Th bit is OFF"<<"\n";
    }

    return 0;
}
