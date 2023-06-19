/*Write a program which accept string from user and accept one character. 
Check whether that character is present in string or not.

Input : Marvellous Multi OS
        e
Output :True

Input : Marvellous Multi OS
        W
Output : False

*/

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }

    if(*str != '\0')
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
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet ==  true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}