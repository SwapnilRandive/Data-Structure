// Write a program which accept two numbers from user and display position of common ON bits from that two numbers.
// Input :- 10       15          (1010       1111)
// Output :- 2   4

#include<iostream>
using namespace std;

typedef unsigned int UINT;

void CommonOnBit(UINT iNo1, UINT iNo2)
{
    UINT iResult1 = 0;
    UINT iResult2 = 0;
    UINT iCount = 1;

    while(iNo1 != 0 || iNo2 != 0)
    {
        iResult1 = iNo1 & 1;
        iResult2 = iNo2 & 1;
        if(iResult1 == 1 & iResult2 == 1)
        {
            cout<<iCount<<"\t";
        }
        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >>1;
        iCount++;
    }
}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;

    cout<<"Enter first number :-"<<"\n";
    cin>>iValue1;

    cout<<"Enter second number :-"<<"\n";
    cin>>iValue2;

    CommonOnBit(iValue1, iValue2);

    return 0;
}