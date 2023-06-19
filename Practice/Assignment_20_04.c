/*Accept character from user and check whether it is small case or not (a-z)

Input : g
Output True

Input D
Output : False

*/

#include<stdio.h>
typedef int bool;

#define True 1
#define False 0

bool ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == True)
    {
        printf("It is small case character");
    }
    else
    {
        printf("It is not a small case character");
    }

    return 0;
}