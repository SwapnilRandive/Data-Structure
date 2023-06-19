// Program to print 5 to 1 numbers on screen

#include<stdio.h>

void Display()
{
    int i = 0;
    int iCnt = 5;

    for(i = iCnt; i >= 1; i--)
    {
        printf("%d\t",i);
    }
}

int main()
{
    Display();

    return 0;
}