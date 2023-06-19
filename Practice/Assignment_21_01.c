/*Write a program which dispalys ASCII table.
Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 225.

*/

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("\tDecimal\t\tHexadecimal\t\tOctal\t\tCharacter\n");
    
    for(iCnt = 0; iCnt <= 225; iCnt++)
    {
        printf("\t%d\t\t%x\t\t\t%o\t\t%c\n",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}