/*Accept character from user and check whether it is alphabet or not (A-Z  a-z)

Input : F
Output : True

Input : & 
Output : False

*/

#include<stdio.h>
typedef int bool;

#define True 1
#define False 0

bool ChkAlpha(char ch)
{
    if(((ch >= 'a') && (ch <= 'z')) || (ch >= 'A') && (ch <= 'Z'))
    {
        return True;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = False;

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == True)
    {
        printf("It is character");
    }
    else
    {
        printf("It is not a character");
    }

    return 0;
}