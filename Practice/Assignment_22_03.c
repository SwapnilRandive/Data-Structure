/*Write a program which accept string from user and return difference between frequenct of small characters and frequency of capital characters.

Input : Marvellous
Output : 6 (8 - 2)

*/

#include<stdio.h>

int Difference(char *str)
{
    int iCnt1 = 0; 
    int iCnt2 = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt1++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt2++;
        }
        str++;
    }
    return iCnt2 - iCnt1;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("Difference is :%d",iRet);
}