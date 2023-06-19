/*Accept character from user and check whether it is capital or not (A-Z)

Input : F
Output : True

Input : d
Output :False

*/

#include<stdio.h>
typedef int bool;

#define True 1
#define False 0

bool ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == True)
    {
        printf("It is capital character");
    }
    else
    {
        printf("It is not a capital character");
    }

    return 0;
}