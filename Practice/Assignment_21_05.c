/*Accept character from user and display its ASCII vlaue in decimal, octal and hexadecimal format.

Input : A
Output : Decimal 65
         Octal 101
         Hexadecimal 0X41
         
*/

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal :\t\t%d\nOctal :\t\t\t%o\nHexadecimal :\t\t%x\n",ch,ch,ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}