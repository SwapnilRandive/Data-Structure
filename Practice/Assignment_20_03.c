/*Accept character from user and check whether it is digit or not (0-9)

Input : 7
Output : True

Input : d
Output : False

*/

#include<stdio.h>
typedef int bool;

#define True 1
#define False 0

bool ChkDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
    {
        return True;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = False;

    printf("Enter the character \n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == True)
    {
        printf("It is digit");
    }
    else
    {
        printf("It is not a digit");
    }

    return 0;
}