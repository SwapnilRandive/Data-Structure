/*Write a program which accept string from user and check whether it contains vowels in it or not.

Input : Marvellous
Output : True

Input : Demo
Output :True

Input : xyz
Output : False

*/

#include<stdio.h>
#include<stdbool.h>

bool ChkVowels(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'A') || (*str == 'e') || (*str == 'E') || (*str == 'i') || (*str == 'I') || (*str == 'o') || (*str == 'O') || (*str == 'u') || (*str == 'U'))
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
    bool bRet = false;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowels(Arr);

    if(bRet == true)
    {
        printf("String contains Vowels\n");
    }
    else
    {
        printf("String does not contains Vowels\n");
    }
    
    return 0;
}