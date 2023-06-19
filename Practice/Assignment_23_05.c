/*Write a program which accept string from user and count number of white spaces.

Input : Marvellous
Output : 0

Input : Marvellous Infosystems
Output : 1

Input : Marvellous Infosystems by Piyush Manohar Khairnnar

*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);

    printf("Numbe of white spaces are :%d",iRet);

    return 0;
}