/*Write a program which accept string from user and display it in reverse order.

Input : Marvellous
Output : suollevraM

*/

#include<stdio.h>

void Reverse(char *str)
{
    char temp = '\0';
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    str--;

    while(iCnt < str)
    {

    }
}

int main()
{
    char Arr[20];

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}